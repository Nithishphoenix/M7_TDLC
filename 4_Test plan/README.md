
|*Test_ID| **Description| **Input|Expected O/P| **Actual O/P|Status*| 
---|---|---|---|---|---|
|TD_01|control_switch|  User Input   |SUCCESS|SUCCESS|Pass :white_check_mark:|
|TD_02|smart_switch|  User  Input|SUCCESS|SUCCESS|Pass :white_check_mark:|
|TD_03|light_bulb|smart_switch|SUCCESS|SUCCESS|Pass :white_check_mark:|
|TD_04|Fan|smart_switch|SUCCESS|SUCCESS|Pass :white_check_mark:|
|TD_05|Fridge|smart_switch|SUCCESS|SUCCESS|Pass :white_check_mark:|

| Test ID | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Fan | 1 |  fan speed changes using encryption |  fan speed changes using encryption | ✅ |
| 02 | Fan | 0 | Off | Off |✅ |


| Test ID | Description | Input | Expected output | Actual Output |Passed/Not |
| --- | --- | --- | --- | --- | --- |
| 01 | Fridge | 1 | set Fridge ON (select the Tempetature (0-17°C))| set Fridge ON (select the Tempetature (0-17°C))| ✅ |
| 02 | Fridge | 0 | set Fridge OFF | set Fridge OFF |  ✅ |

| Test ID | Description | Input | Expected output |Actual Output|Passed/Not |
| --- | --- | --- | --- | --- | --- |
| 01 | Light | 1 | Light Intensity changes using encryption | Light Intensity changes using encryption | ✅ |
| 02 | Light | 0 | Off | Off |✅ |




| LLR                    | Description | User_input | Expected_Output           | Actual_Output             |
|------------------------|-------------|------------|---------------------------|---------------------------|
| LLR1_HLR1 light        | Power       | 1          | Device Powered On & Ready | Device Powered On & Ready |
| LLR2_HLR1 light        | Power       | 0          | Device Turned Off         | Device Turned Off         |
| LLR3_HLR1 light        | Brightness  | 1          | Low                       | Low                       |
| LLR4_HLR1 light        | Brightness  | 2          | Medium                    | Medium                    |
| LLR5_HLR1 light        | Brightness  | 3          | High                      | High                      |
| LLR6_HLR1 light        | Brightness  | 0          | Device Powered On & Idle  | Device Powered On & Idle  |
| LLR1_HLR2 fan          | Power       | 1          | Device Powered On & Ready | Device Powered On & Ready |
| LLR2_HLR2 fan          | Power       | 0          | Device Turned Off         | Device Turned Off         |
| LLR3_HLR2 fan          | Speed       | 1          | Low                       | Low                       |
| LLR4_HLR2 fan          | Speed       | 2          | Medium                    | Medium                    |
| LLR5_HLR2 fan          | Speed       | 3          | High                      | High                      |
| LLR6_HLR2 fan          | Speed       | 0          | Device Powered On & Idle  | Device Powered On & Idle  |
| LLR1_HLR3 refrigerator | Power       | 1          | Device Powered On & Ready | Device Powered On & Ready |
| LLR2_HLR3 refrigerator | Power       | 0          | Device Turned Off         | Device Turned Off         |
| LLR3_HLR3 refrigerator | Temperature | 1          | Low                       | Low                       |
| LLR4_HLR3 refrigerator | Temperature | 2          | Medium                    | Medium                    |
| LLR5_HLR3 refrigerator | Temperature | 3          | High                      | High                      |
| LLR6_HLR3 refrigerator | Temperature | 0          | Device Powered On & Ready | Device Powered On & Ready |
