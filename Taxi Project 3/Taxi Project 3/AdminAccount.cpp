#include "Functions.h"

void weeklyReport() {

}

void adminAccount()
{
	// initializing Varables 
	bool runAccount = true;
	bool runAccount2 = true;
	int menuOption = 1;


	while (runAccount == true) {
		//Read complaint_problems userProbCount !must be replaced!
		cout << "\n1 View Customer Accounts|2 View Driver Accounts|3 View Compliants and Problems|4 User Feedback|\n5 Weekly Report |6 Daily Report|7 Cancellation & Registration report|8 System|9 Back to menu\n:";
		cin >> menuOption;
		try {
			switch (menuOption)
			{
			case 1:
				//Function for reading
				readCSV("customerFile");
				break;
			case 2:
				//Function for reading
				readCSV("driverFile");
				break;
			case 3:
				readTXT("complaint_problems");
				break;
			case 4:
				readTXT("user_feedback");
				break;
			case 5:
				readTXT("weekly_report");
				break;
			case 6:
				readTXT("daily_report");
				break;
			case 7:
				runAccount2 = true;
				while (runAccount2 == true)
				{
					try
					{
						cout << "\n1 Cancellation Report|2 Registration Report|3 Back a step\n:";
						cin >> menuOption;
						switch (menuOption)
						{
						case 1:
							readTXT("cancellation_report");
							break;
						case 2:
							readTXT("registration_report");
							break;
						case 3:
							runAccount2 = false;
							break;
						default:
							throw(menuOption);
							break;
						}
					}
					catch (int menuOption)
					{
						cout << "\nInvalid Input.\nPlease input one of the available options\n";
					}
				}

				break;
			case 8:
				//(I don?t think we have to do anything for this but we still need to have the placeholder)
				break;
			case 9:
				runAccount = false;
				landing();
			default:
				throw(menuOption);
				break;
			}
		}
		catch (int menuOption) {
			cout << "\nInvalid Input.\nPlease input one of the available options\n";
		}
	}
}