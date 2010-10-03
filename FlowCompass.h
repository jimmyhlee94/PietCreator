/*
 *  Copyright (C) 2010 Casey Link <unnamedrambler@gmail.com>
 * 
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU Library General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or (at your
 *  option) any later version.
 * 
 *  This library is distributed in the hope that it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
 *  License for more details.
 * 
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to the
 *  Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 *  02110-1301, USA.
 */

#ifndef FLOWCOMPASS_H
#define FLOWCOMPASS_H

#include <QWidget>


class FlowCompass : public QWidget
{
Q_OBJECT
public:

    enum Direction {
        Left = 0,
        Right,
        Up,
        Down
    };

    FlowCompass( QWidget * parent );
    virtual ~FlowCompass();

    virtual QSize sizeHint() const;

    void setCCDirection( const Direction &direction );
    void setDPDirection( const Direction &direction );

protected:
    virtual void paintEvent(QPaintEvent* );

private:
    Direction mCCDirection;
    Direction mDPDirection;
};

#endif // FLOWCOMPASS_H