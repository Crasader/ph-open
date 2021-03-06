/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ScheduledFuture
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Future; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Delayed; } } } }


#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/concurrent/Delayed.hpp>
#include <java/util/concurrent/Future.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ScheduledFuture;
	class ScheduledFuture
		: public object<ScheduledFuture>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit ScheduledFuture(jobject jobj)
		: object<ScheduledFuture>(jobj)
		{
		}

		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::concurrent::Future>() const;
		operator local_ref<java::util::concurrent::Delayed>() const;

	}; //class ScheduledFuture

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ScheduledFuture::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::util::concurrent::ScheduledFuture::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ScheduledFuture::operator local_ref<java::util::concurrent::Future>() const
{
	return local_ref<java::util::concurrent::Future>(get_jobject());
}

java::util::concurrent::ScheduledFuture::operator local_ref<java::util::concurrent::Delayed>() const
{
	return local_ref<java::util::concurrent::Delayed>(get_jobject());
}

J2CPP_DEFINE_CLASS(java::util::concurrent::ScheduledFuture,"java/util/concurrent/ScheduledFuture")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
