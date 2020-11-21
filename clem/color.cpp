// Copyright 2020 SMS
// License(Apache-2.0)
// ��������

#include "color.h"
#include <clem/assert.h>

using std::string;

Color::Color()
		: Color(attr::white, attr::black)
{
}

Color::Color(attr f)
		: Color(f, attr::black)
{
}

Color::Color(attr f, attr b)
{
	assert(f < attr::max && b < attr::max, "��Ч����ɫ����");
	fore = back = nullptr;
}

const std::string& Color::getString() const
{
	assert(fore != nullptr && back != nullptr, "ָ����Ч");
	return string(fore) + string(back);
}
