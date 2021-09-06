# TEST PLAN:

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Status**|**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|-----------|-------|
|  `HLR1`       |USER LOGIN   | Password |Login |Username and Password stored|SUCCESS|Requirement based |
|  `HLR2`       |SET A REMINDER| Select option to set reminder|To do respect task in that track |Obtained Option  |SUCCESS  |Requirement based |
|`HLR3`  | VIEW THE CALENDAR  |Value **0**|Display Calendar |Display all months |SUCCESS| Requirement based|

## Low level test plan

|**Test ID** | **HLT ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual Out** | **Type of test**|
|--------|--------|-------------|---------|---------|------------|-------------|
|`LLR1`  |`HLR1`  | Welcome message with respect to system time  |None| Display Welcome message | Display | Scenario based|
|`LLR2` | `HLR1` | To check if password is correct | Correct Password input| Give message about condition |Display **greet the user**| Boundary based|
|`LLR3` | `HLR1` | To check if new password matches with confirm password |Enter the wrong password | Display error message |"Incorrect password, please re-enter" | Requirement based|
|`LLR4`|`HLR2`|Asking User to select track| integer value as in menu| move to their respective track| Shows the sub menu of respective track| Requirement based|
|`LLR5`|`HLR2`| To invoke function as per selected option|Integer value as in menu| calls the function in that track| as per the entered option, the function is called| Requirement based|
|`LLR6`|`HLR2`| Events view the reminder | Add about event and duration to check details| wait for that long and see the schedule| any event for the day | Requirement based |
|`LLR6`|`HLR3`| Events view the calendar | Check the Calendar| Display the Calendar| Display Calendar | Requirement based |
