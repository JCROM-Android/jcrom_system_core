/*
 * Copyright (C) 2012 Japanese custom rom Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdlib.h>
#include <cutils/log.h>
#include <cutils/properties.h>

int main(int argc, char **argv)
{
    char property[PROPERTY_VALUE_MAX];

    if (property_get("persist.sys.force.hobby", property, NULL) > 0) {
        if (0 == strcmp(property, "true")) {
            //ATOK
            system("rm /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/skin.xml");
            system("rm /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg.jpg");
            system("rm /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg_land.jpg");
            system("cp /data/theme/atok/skin.xml /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/skin.xml");
            system("cp /data/theme/atok/jcrom_port.jpg /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg.jpg");
            system("cp /data/theme/atok/jcrom_land.jpg /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg_land.jpg");
            system("chmod 666 /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/skin.xml");
            system("chmod 666 /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg.jpg");
            system("chmod 666 /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg_land.jpg");
        } else {
            //ATOK
            system("rm /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/skin.xml");
            system("rm /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg.jpg");
            system("rm /data/data/com.justsystems.atokmobile.service/files/skins/カスタム1/kbd_bg_land.jpg");
        }
    }
    property_set("persist.sys.force.lock", "none");
    property_set("persist.sys.theme.lock", "false");

    return 0;
}

