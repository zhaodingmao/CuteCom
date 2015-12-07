/*
 * Copyright (c) 2015 Meinhard Ritscher <cyc1ingsir@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 */

#ifndef STATUSBAR_H
#define STATUSBAR_H

#include "ui_statusbar.h"
#include "settings.h"

class StatusBar : public QWidget, private Ui::StatusBar
{
    Q_OBJECT

public:
    explicit StatusBar(QWidget *parent = 0);
    void sessionChanged(const Settings::Session &session);
    void setDeviceInfo(const QSerialPort *port);
    void setToolTip(const QSerialPort *port);
};

#endif // STATUSBAR_H
