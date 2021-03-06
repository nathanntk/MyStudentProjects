
// transactions.h

#include <vector>
#include <ctime>

using namespace std;

class transactions
{
	private:
	public:
		
		// transaction functions for renting, displaying, storing, and loading loan data
		void rentMovie(vector<customer> &customerInfo, vector<movie> &movieInfo, vector<transaction> &loanInfo);
		void rentGame(vector<customer> &customerInfo, vector<movie> &movieInfo, vector<transaction> &loanInfo, vector<game> &gameInfo);
		void printLoans(vector<customer> &customerInfo, vector<movie> &movieInfo, vector<transaction> &loanInfo);
		void storeLoans(vector<customer> &customerInfo, vector<movie> &movieInfo, vector<transaction> &loanInfo);
		void loadLoans(vector<customer> &customerInfo, vector<movie> &movieInfo, vector<transaction> &loanInfo);
};
