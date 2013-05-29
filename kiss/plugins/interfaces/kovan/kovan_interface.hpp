#ifndef _KOVAN_INTERFACE_HPP_
#define _KOVAN_INTERFACE_HPP_

#include <QtPlugin>
#include <QRunnable>
#include <QList>
#include <QHostAddress>
#include "interface.hpp"
#include <kovanserial/udp_advertiser.hpp>

class UdpAdvertiser;

namespace Kiss
{
	namespace Target
	{
		class AdvertSampler : public QObject, public QRunnable
		{
		Q_OBJECT
		public:
			AdvertSampler(UdpAdvertiser *advertiser, const quint64 &sampleTime, const quint16 &samples);
			~AdvertSampler();
			void run();

		signals:
			void found(const Advert &ad, const sockaddr_in &addr);

		private:
			UdpAdvertiser *m_advertiser;
			quint64 m_sampleTime;
			quint16 m_samples;
			
			QList<QHostAddress> m_found;
		};

		class KovanInterface : public QObject, public Kiss::Target::Interface
		{
		Q_OBJECT
		Q_INTERFACES(Kiss::Target::Interface)
		public:
			KovanInterface();
			~KovanInterface();
			
			virtual Kiss::Target::TargetPtr createTarget(const QString &address);
			virtual const bool scan(Kiss::Target::InterfaceResponder *responder);
			virtual void invalidateResponder();

		private slots:
			void scanStarted();
			void found(const Advert &ad, const sockaddr_in& addr);

		private:
			UdpAdvertiser *m_advertiser;
			Kiss::Target::InterfaceResponder *m_responder;
		};
	}
}


#endif
