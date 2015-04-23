/*
    Copyright (C) 2015 Volker Krause <vkrause@kde.org>

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DWARFEXPRESSION_H
#define DWARFEXPRESSION_H

#include <QByteArray>
#include <QMetaType>

#include <libdwarf/libdwarf.h>

class QString;

/** Handles DW_FORM_exprloc attribute values. */
class DwarfExpression
{
public:
    DwarfExpression();
    explicit DwarfExpression(Dwarf_Ptr block, Dwarf_Unsigned len, uint8_t addrSize);
    ~DwarfExpression();

    QString displayString() const;
private:
    QByteArray m_block;
    uint8_t m_addrSize;
};

Q_DECLARE_METATYPE(DwarfExpression)

#endif // DWARFEXPRESSION_H
