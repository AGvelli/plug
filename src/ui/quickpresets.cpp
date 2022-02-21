/*
 * PLUG - software to operate Fender Mustang amplifier
 *        Linux replacement for Fender FUSE software
 *
 * Copyright (C) 2017-2021  offa
 * Copyright (C) 2010-2016  piorekf <piorek@piorekf.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ui/quickpresets.h"
#include "ui_quickpresets.h"

namespace plug
{

    QuickPresets::QuickPresets(QWidget* parent)
        : QDialog(parent),
          ui(std::make_unique<Ui::QuickPresets>())
    {
        ui->setupUi(this);

        connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));

        connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(setDefaultPreset0(int)));
        connect(ui->comboBox_2, SIGNAL(activated(int)), this, SLOT(setDefaultPreset1(int)));
        connect(ui->comboBox_3, SIGNAL(activated(int)), this, SLOT(setDefaultPreset2(int)));
        connect(ui->comboBox_4, SIGNAL(activated(int)), this, SLOT(setDefaultPreset3(int)));
        connect(ui->comboBox_5, SIGNAL(activated(int)), this, SLOT(setDefaultPreset4(int)));
        connect(ui->comboBox_6, SIGNAL(activated(int)), this, SLOT(setDefaultPreset5(int)));
        connect(ui->comboBox_7, SIGNAL(activated(int)), this, SLOT(setDefaultPreset6(int)));
        connect(ui->comboBox_8, SIGNAL(activated(int)), this, SLOT(setDefaultPreset7(int)));
        connect(ui->comboBox_9, SIGNAL(activated(int)), this, SLOT(setDefaultPreset8(int)));
        connect(ui->comboBox_10, SIGNAL(activated(int)), this, SLOT(setDefaultPreset9(int)));
        connect(ui->comboBox_11, SIGNAL(activated(int)), this, SLOT(setDefaultPreset10(int)));
        connect(ui->comboBox_12, SIGNAL(activated(int)), this, SLOT(setDefaultPreset11(int)));
        connect(ui->comboBox_13, SIGNAL(activated(int)), this, SLOT(setDefaultPreset12(int)));
        connect(ui->comboBox_14, SIGNAL(activated(int)), this, SLOT(setDefaultPreset13(int)));
        connect(ui->comboBox_15, SIGNAL(activated(int)), this, SLOT(setDefaultPreset14(int)));
        connect(ui->comboBox_16, SIGNAL(activated(int)), this, SLOT(setDefaultPreset15(int)));
        connect(ui->comboBox_17, SIGNAL(activated(int)), this, SLOT(setDefaultPreset16(int)));
        connect(ui->comboBox_18, SIGNAL(activated(int)), this, SLOT(setDefaultPreset17(int)));
        connect(ui->comboBox_19, SIGNAL(activated(int)), this, SLOT(setDefaultPreset18(int)));
        connect(ui->comboBox_20, SIGNAL(activated(int)), this, SLOT(setDefaultPreset19(int)));
        connect(ui->comboBox_21, SIGNAL(activated(int)), this, SLOT(setDefaultPreset20(int)));
        connect(ui->comboBox_22, SIGNAL(activated(int)), this, SLOT(setDefaultPreset21(int)));
        connect(ui->comboBox_23, SIGNAL(activated(int)), this, SLOT(setDefaultPreset22(int)));
        connect(ui->comboBox_24, SIGNAL(activated(int)), this, SLOT(setDefaultPreset23(int)));

    }

    void QuickPresets::load_names(const std::vector<std::string>& names)
    {
        QSettings settings;
        std::size_t i = 0;

        for (i = 0; i < 100; i++)
        {
            if (names[i][0] == 0x00)
            {
                break;
            }
            const QString name = QString::fromStdString(names[i]);
            ui->comboBox->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_2->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_3->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_4->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_5->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_6->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_7->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_8->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_9->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_10->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_11->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_12->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_13->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_14->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_15->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_16->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_17->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_18->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_19->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_20->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_21->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_22->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_23->addItem(QString("[%1] %2").arg(i + 1).arg(name));
            ui->comboBox_24->addItem(QString("[%1] %2").arg(i + 1).arg(name));
        }

        ui->comboBox->addItem(tr("[Empty]"));
        ui->comboBox_2->addItem(tr("[Empty]"));
        ui->comboBox_3->addItem(tr("[Empty]"));
        ui->comboBox_4->addItem(tr("[Empty]"));
        ui->comboBox_5->addItem(tr("[Empty]"));
        ui->comboBox_6->addItem(tr("[Empty]"));
        ui->comboBox_7->addItem(tr("[Empty]"));
        ui->comboBox_8->addItem(tr("[Empty]"));
        ui->comboBox_9->addItem(tr("[Empty]"));
        ui->comboBox_10->addItem(tr("[Empty]"));
        ui->comboBox_11->addItem(tr("[Empty]"));
        ui->comboBox_12->addItem(tr("[Empty]"));
        ui->comboBox_13->addItem(tr("[Empty]"));
        ui->comboBox_14->addItem(tr("[Empty]"));
        ui->comboBox_15->addItem(tr("[Empty]"));
        ui->comboBox_16->addItem(tr("[Empty]"));
        ui->comboBox_17->addItem(tr("[Empty]"));
        ui->comboBox_18->addItem(tr("[Empty]"));
        ui->comboBox_19->addItem(tr("[Empty]"));
        ui->comboBox_20->addItem(tr("[Empty]"));
        ui->comboBox_21->addItem(tr("[Empty]"));
        ui->comboBox_22->addItem(tr("[Empty]"));
        ui->comboBox_23->addItem(tr("[Empty]"));
        ui->comboBox_24->addItem(tr("[Empty]"));

        if (settings.contains("DefaultPresets/Preset0"))
            ui->comboBox->setCurrentIndex(settings.value("DefaultPresets/Preset0").toInt());
        else
            ui->comboBox->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset1"))
            ui->comboBox_2->setCurrentIndex(settings.value("DefaultPresets/Preset1").toInt());
        else
            ui->comboBox_2->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset2"))
            ui->comboBox_3->setCurrentIndex(settings.value("DefaultPresets/Preset2").toInt());
        else
            ui->comboBox_3->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset3"))
            ui->comboBox_4->setCurrentIndex(settings.value("DefaultPresets/Preset3").toInt());
        else
            ui->comboBox_4->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset4"))
            ui->comboBox_5->setCurrentIndex(settings.value("DefaultPresets/Preset4").toInt());
        else
            ui->comboBox_5->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset5"))
            ui->comboBox_6->setCurrentIndex(settings.value("DefaultPresets/Preset5").toInt());
        else
            ui->comboBox_6->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset6"))
            ui->comboBox_7->setCurrentIndex(settings.value("DefaultPresets/Preset6").toInt());
        else
            ui->comboBox_7->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset7"))
            ui->comboBox_8->setCurrentIndex(settings.value("DefaultPresets/Preset7").toInt());
        else
            ui->comboBox_8->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset8"))
            ui->comboBox_9->setCurrentIndex(settings.value("DefaultPresets/Preset8").toInt());
        else
            ui->comboBox_9->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset9"))
            ui->comboBox_10->setCurrentIndex(settings.value("DefaultPresets/Preset9").toInt());
        else
            ui->comboBox_10->setCurrentIndex(i);
            
        if (settings.contains("DefaultPresets/Preset10"))
            ui->comboBox_11->setCurrentIndex(settings.value("DefaultPresets/Preset10").toInt());
        else
            ui->comboBox_11->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset11"))
            ui->comboBox_12->setCurrentIndex(settings.value("DefaultPresets/Preset11").toInt());
        else
            ui->comboBox_12->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset12"))
            ui->comboBox_13->setCurrentIndex(settings.value("DefaultPresets/Preset12").toInt());
        else
            ui->comboBox_13->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset13"))
            ui->comboBox_14->setCurrentIndex(settings.value("DefaultPresets/Preset13").toInt());
        else
            ui->comboBox_14->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset14"))
            ui->comboBox_15->setCurrentIndex(settings.value("DefaultPresets/Preset14").toInt());
        else
            ui->comboBox_15->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset15"))
            ui->comboBox_16->setCurrentIndex(settings.value("DefaultPresets/Preset15").toInt());
        else
            ui->comboBox_16->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset16"))
            ui->comboBox_17->setCurrentIndex(settings.value("DefaultPresets/Preset16").toInt());
        else
            ui->comboBox_17->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset17"))
            ui->comboBox_18->setCurrentIndex(settings.value("DefaultPresets/Preset17").toInt());
        else
            ui->comboBox_18->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset18"))
            ui->comboBox_19->setCurrentIndex(settings.value("DefaultPresets/Preset18").toInt());
        else
            ui->comboBox_19->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset19"))
            ui->comboBox_20->setCurrentIndex(settings.value("DefaultPresets/Preset19").toInt());
        else
            ui->comboBox_20->setCurrentIndex(i);
            
        if (settings.contains("DefaultPresets/Preset20"))
            ui->comboBox_21->setCurrentIndex(settings.value("DefaultPresets/Preset20").toInt());
        else
            ui->comboBox_21->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset21"))
            ui->comboBox_22->setCurrentIndex(settings.value("DefaultPresets/Preset21").toInt());
        else
            ui->comboBox_22->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset22"))
            ui->comboBox_23->setCurrentIndex(settings.value("DefaultPresets/Preset22").toInt());
        else
            ui->comboBox_23->setCurrentIndex(i);

        if (settings.contains("DefaultPresets/Preset23"))
            ui->comboBox_24->setCurrentIndex(settings.value("DefaultPresets/Preset23").toInt());
        else
            ui->comboBox_24->setCurrentIndex(i);
    }

    void QuickPresets::delete_items()
    {
        int j = ui->comboBox->count();
        for (int i = 0; i < j; i++)
        {
            ui->comboBox->removeItem(0);
            ui->comboBox_2->removeItem(0);
            ui->comboBox_3->removeItem(0);
            ui->comboBox_4->removeItem(0);
            ui->comboBox_5->removeItem(0);
            ui->comboBox_6->removeItem(0);
            ui->comboBox_7->removeItem(0);
            ui->comboBox_8->removeItem(0);
            ui->comboBox_9->removeItem(0);
            ui->comboBox_10->removeItem(0);
            ui->comboBox_11->removeItem(0);
            ui->comboBox_12->removeItem(0);
            ui->comboBox_13->removeItem(0);
            ui->comboBox_14->removeItem(0);
            ui->comboBox_15->removeItem(0);
            ui->comboBox_16->removeItem(0);
            ui->comboBox_17->removeItem(0);
            ui->comboBox_18->removeItem(0);
            ui->comboBox_19->removeItem(0);
            ui->comboBox_20->removeItem(0);
            ui->comboBox_21->removeItem(0);
            ui->comboBox_22->removeItem(0);
            ui->comboBox_23->removeItem(0);
            ui->comboBox_24->removeItem(0);
        }
    }

    void QuickPresets::change_name(int slot, QString* name)
    {
        ui->comboBox->setItemText(slot, *name);
        ui->comboBox->setCurrentIndex(slot);

        ui->comboBox_2->setItemText(slot, *name);
        ui->comboBox_2->setCurrentIndex(slot);

        ui->comboBox_3->setItemText(slot, *name);
        ui->comboBox_3->setCurrentIndex(slot);

        ui->comboBox_4->setItemText(slot, *name);
        ui->comboBox_4->setCurrentIndex(slot);

        ui->comboBox_5->setItemText(slot, *name);
        ui->comboBox_5->setCurrentIndex(slot);

        ui->comboBox_6->setItemText(slot, *name);
        ui->comboBox_6->setCurrentIndex(slot);

        ui->comboBox_7->setItemText(slot, *name);
        ui->comboBox_7->setCurrentIndex(slot);

        ui->comboBox_8->setItemText(slot, *name);
        ui->comboBox_8->setCurrentIndex(slot);

        ui->comboBox_9->setItemText(slot, *name);
        ui->comboBox_9->setCurrentIndex(slot);

        ui->comboBox_10->setItemText(slot, *name);
        ui->comboBox_10->setCurrentIndex(slot);
        
        ui->comboBox_11->setItemText(slot, *name);
        ui->comboBox_11->setCurrentIndex(slot);

        ui->comboBox_12->setItemText(slot, *name);
        ui->comboBox_12->setCurrentIndex(slot);

        ui->comboBox_13->setItemText(slot, *name);
        ui->comboBox_13->setCurrentIndex(slot);

        ui->comboBox_14->setItemText(slot, *name);
        ui->comboBox_14->setCurrentIndex(slot);

        ui->comboBox_15->setItemText(slot, *name);
        ui->comboBox_15->setCurrentIndex(slot);

        ui->comboBox_16->setItemText(slot, *name);
        ui->comboBox_16->setCurrentIndex(slot);

        ui->comboBox_17->setItemText(slot, *name);
        ui->comboBox_17->setCurrentIndex(slot);

        ui->comboBox_18->setItemText(slot, *name);
        ui->comboBox_18->setCurrentIndex(slot);

        ui->comboBox_19->setItemText(slot, *name);
        ui->comboBox_19->setCurrentIndex(slot);

        ui->comboBox_20->setItemText(slot, *name);
        ui->comboBox_20->setCurrentIndex(slot);
        
        ui->comboBox_21->setItemText(slot, *name);
        ui->comboBox_21->setCurrentIndex(slot);
        
        ui->comboBox_22->setItemText(slot, *name);
        ui->comboBox_22->setCurrentIndex(slot);
        
        ui->comboBox_23->setItemText(slot, *name);
        ui->comboBox_23->setCurrentIndex(slot);
        
        ui->comboBox_24->setItemText(slot, *name);
        ui->comboBox_24->setCurrentIndex(slot);
    }

    void QuickPresets::setDefaultPreset0(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset0");
        else
            settings.setValue("DefaultPresets/Preset0", slot);
    }

    void QuickPresets::setDefaultPreset1(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset1");
        else
            settings.setValue("DefaultPresets/Preset1", slot);
    }

    void QuickPresets::setDefaultPreset2(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset2");
        else
            settings.setValue("DefaultPresets/Preset2", slot);
    }

    void QuickPresets::setDefaultPreset3(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset3");
        else
            settings.setValue("DefaultPresets/Preset3", slot);
    }

    void QuickPresets::setDefaultPreset4(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset4");
        else
            settings.setValue("DefaultPresets/Preset4", slot);
    }

    void QuickPresets::setDefaultPreset5(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset5");
        else
            settings.setValue("DefaultPresets/Preset5", slot);
    }

    void QuickPresets::setDefaultPreset6(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset6");
        else
            settings.setValue("DefaultPresets/Preset6", slot);
    }

    void QuickPresets::setDefaultPreset7(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset7");
        else
            settings.setValue("DefaultPresets/Preset7", slot);
    }

    void QuickPresets::setDefaultPreset8(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset8");
        else
            settings.setValue("DefaultPresets/Preset8", slot);
    }

    void QuickPresets::setDefaultPreset9(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset9");
        else
            settings.setValue("DefaultPresets/Preset9", slot);
    }

    void QuickPresets::setDefaultPreset10(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset10");
        else
            settings.setValue("DefaultPresets/Preset10", slot);
    }

    void QuickPresets::setDefaultPreset11(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset11");
        else
            settings.setValue("DefaultPresets/Preset11", slot);
    }

    void QuickPresets::setDefaultPreset12(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset12");
        else
            settings.setValue("DefaultPresets/Preset12", slot);
    }

    void QuickPresets::setDefaultPreset13(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset13");
        else
            settings.setValue("DefaultPresets/Preset13", slot);
    }

    void QuickPresets::setDefaultPreset14(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset14");
        else
            settings.setValue("DefaultPresets/Preset14", slot);
    }

    void QuickPresets::setDefaultPreset15(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset15");
        else
            settings.setValue("DefaultPresets/Preset15", slot);
    }

    void QuickPresets::setDefaultPreset16(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset16");
        else
            settings.setValue("DefaultPresets/Preset16", slot);
    }

    void QuickPresets::setDefaultPreset17(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset17");
        else
            settings.setValue("DefaultPresets/Preset17", slot);
    }

    void QuickPresets::setDefaultPreset18(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset18");
        else
            settings.setValue("DefaultPresets/Preset18", slot);
    }

    void QuickPresets::setDefaultPreset19(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset19");
        else
            settings.setValue("DefaultPresets/Preset19", slot);
    }

    void QuickPresets::setDefaultPreset20(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset20");
        else
            settings.setValue("DefaultPresets/Preset20", slot);
    }
    
        void QuickPresets::setDefaultPreset21(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset21");
        else
            settings.setValue("DefaultPresets/Preset21", slot);
    }
    
        void QuickPresets::setDefaultPreset22(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset22");
        else
            settings.setValue("DefaultPresets/Preset22", slot);
    }
    
        void QuickPresets::setDefaultPreset23(int slot)
    {
        QSettings settings;

        if (slot == 24 || slot == 100)
            settings.remove("DefaultPresets/Preset23");
        else
            settings.setValue("DefaultPresets/Preset23", slot);
    }



    void QuickPresets::changeEvent(QEvent* e)
    {
        QDialog::changeEvent(e);
        switch (e->type())
        {
            case QEvent::LanguageChange:
                ui->retranslateUi(this);
                break;
            default:
                break;
        }
    }
}

#include "ui/moc_quickpresets.moc"
