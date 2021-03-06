// Copyright 2020 SMS
// License(Apache-2.0)
// 观察者

#ifndef CLEM_OBSERVER_H_
#define CLEM_OBSERVER_H_

#include "observable.h"

class Observer
{
public:
	virtual void onNotify(const Observable&) = 0;
};

#endif // CLEM_OBSERVER_H_
