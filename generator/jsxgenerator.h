/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Script Generator project on Qt Labs.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef JSXGENERATOR_H
#define JSXGENERATOR_H

#include "generator.h"
#include <QSet>

class JSXGenerator : public Generator
{
    QSet<QString> _ignoreFileList;
    QMap<QString, QStringList*> _relatedFileList;
    QMap<QString, QStringList*> _additionalIncludeList;
    QMap<QString, QString> _signals;

public:
    JSXGenerator();

    virtual bool shouldGenerate(const AbstractMetaClass *meta_class) const;
    virtual void generate();
    virtual QString fileNameForClass(const AbstractMetaClass *meta_class) const;
    virtual QString subDirectoryForClass(const AbstractMetaClass *cls) const;
    virtual void write(QTextStream &s, const AbstractMetaClass *meta_class);

    void addRelatedFile(QString target, QString relatedfile);
    void addAdditionalInclude(QString target, QString includefile);
};

#endif
