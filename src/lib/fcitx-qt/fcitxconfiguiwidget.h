/***************************************************************************
 *   Copyright (C) 2012~2012 by CSSlayer                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.              *
 ***************************************************************************/

#ifndef FCITXCONFIGUIWIDGET_H
#define FCITXCONFIGUIWIDGET_H
#include "fcitxqt_export.h"
#include <QWidget>

class FCITX_QT_EXPORT_API FcitxConfigUIWidget : public QWidget {
    Q_OBJECT
public:
    explicit FcitxConfigUIWidget(QWidget* parent = 0);

    virtual void load(const QString& file) = 0;
    virtual void save() = 0;
};

#endif // FCITXCONFIGUIWIDGET_H