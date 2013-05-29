#ifndef _THREAD_HPP_
#define _THREAD_HPP_

#ifndef WIN32
#include <pthread.h>
#endif

#include "export.h"

class EXPORT_SYM Mutex
{
public:
	Mutex();
	~Mutex();
	
	void lock();
	bool tryLock();
	
	void unlock();
	
private:
	Mutex(const Mutex &rhs);

#ifdef WIN32
	CRITICAL_SECTION m_handle;
#else
	pthread_mutex_t m_handle;
#endif
};

class EXPORT_SYM Thread
{
public:
	Thread();
	virtual ~Thread();
	
	void start();
	void join();
	
	virtual void run() = 0;
	
private:
#ifndef WIN32
	pthread_t m_thread;
#else
	unsigned long m_thread;
#endif
};

#endif
