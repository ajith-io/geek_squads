# TEST PLAN:

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Status**|**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|-----------|-------|
|  `HLR1`       |To Create an account or to Login | Username and Password |Signin or Login |Username and Password stored|SUCCESS|Requirement based |
|  `HLR2`       |Displaying MENU| Select option to choose track |To do respect task in that track |Obtained Option  |SUCCESS  |Requirement based |
|`HLR3`  | Selcting the Finance track |Value **2**|Display another menu |Display 1.Revenue 2.Expense 3.Summary 4.Main menu |SUCCESS| Requirement based|
|`HLR4`  | Selecting the Events Calendar track |Value **3**| Display another menu| Display 1.Set Reminder 2.Check Calendar 3.Main menu|SUCCESS| Requirement based|

## Low level test plan

|**Test ID** | **HLT ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual Out** | **Type of test**|
|--------|--------|-------------|---------|---------|------------|-------------|
|`LLR1`  |`HLR1`  | Welcome message with respect to system time  |None| Display Welcome messsage | Display | Scenario based|
|`LLR2` | `HLR1` |To check is username already exist | Username |Display **User already exists** | Display and ask to create again | Boundary based|
|`LLR3` | `HLR1` | To check if minimum length of password is 8 | Password input| Give message about condition |Display **minimum size of password is 8**| Boundary based|
|`LLR4` | `HLR1` | To check if new password matches with confirm password |Enter the same password twice | Stores in file | account created successfully and add details in file | Requirement based|
|`LLR5` | `HLR1` | To check if correct password is enter while logging in |Password |Login if password is correct or display message that its incorrect| Get logged in if not error message | Boundary based|
|`LLR6` | `HLR1` | If the User has not created account before logging in |Username in login|Display message if username doesnt eixst | Display **User doesnt exist Please create account** | Boundary based|
|`LLR7`|`HLR2`|Asking User to select track| integer value as in menu| move to their respective track| Shows the sub menu of respective track| Requiremnet based|
|`LLR8`|`HLR2`| To invoke function as per selected option|Integer value as in menu| calls the function in that track| as per the entered option, the function is called| Requirement based|
|`LLR9`|`HLR3`| To take Revenue details| Budget value | Choose for budget plan, spending budget or exit | takes budget and display sub menu | Requirement based| 
|`LLR10`|`HLR3`| To take the expense details | Asks the amount spend | To store details of spending | Keep track of amount spent | Requirement based|
|`LLR11`|`HLR4`| To summarize the budget | All amount spent | Reduce the spent amount from budget | Gives left budget after spent | Requirement based |
|`LLR12`|`HLR4`| Events view the reminder | Add about event and duration to check details| wait for that long and see the schedule| any event for the day | Requirement based |
