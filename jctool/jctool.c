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
            system("mkdir /data/data/com.adamrocker.android.input.simeji/files");
            system("chmod 777 /data/data/com.adamrocker.android.input.simeji/files");
            system("rm /data/data/com.adamrocker.android.input.simeji/files/port_bg.png");
            system("rm /data/data/com.adamrocker.android.input.simeji/files/land_bg.png");
            system("rm /data/data/com.adamrocker.android.input.simeji/files/cport_bg.png");
            system("rm /data/data/com.adamrocker.android.input.simeji/files/cland_bg.png");
            system("cp /data/theme/simeji/jcrom_port.png /data/data/com.adamrocker.android.input.simeji/files/port_bg.png");
            system("chmod 666 /data/data/com.adamrocker.android.input.simeji/files/port_bg.png");
            system("cp /data/theme/simeji/jcrom_land.png /data/data/com.adamrocker.android.input.simeji/files/land_bg.png");
            system("chmod 666 /data/data/com.adamrocker.android.input.simeji/files/land_bg.png");
        } else {
            system("rm /data/data/com.adamrocker.android.input.simeji/files/port_bg.png");
            system("rm /data/data/com.adamrocker.android.input.simeji/files/land_bg.png");
            system("rm /data/data/com.adamrocker.android.input.simeji/files/cport_bg.png");
            system("rm /data/data/com.adamrocker.android.input.simeji/files/cland_bg.png");
        }
    }

    return 0;
}

