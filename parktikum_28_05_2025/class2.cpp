#include <iostream>
#include <iomanip>
using namespace std;

class Worker{
	private:
		string name;
		string workerId;
		float salary;

	public:
		Worker() : name(""), workerId(""), salary(0.0f) {}
		Worker(string name, string workerId, float salary) {
			this->name = name;
			this->workerId = workerId;
			this->salary = salary;
		}

		void setWorker(string name, string workerId, float salary){
			this->name = name;
			this->workerId = workerId;
			this->salary = salary;
		}

		void setName(string name){
			this->name = name;
		}

		void setWorkerId(string workerId){
			this->workerId = workerId;
		}

		void setSalary(float salary){
			this->salary = salary;
		}

		string getName(){
			return name;
		}

		string getWorkerId(){
			return workerId;
		}

		float getSalary(){
			return salary;
		}

		Worker& getWorker(){
			return *this;
		}
};

int main(){
	Worker w = {"Rafi Indra Pramudhito Zuhayr", "20230000", 999999.9f};

	cout << "Nama\t\t: " << w.getName() << endl;
	cout << "Worker id\t: " << w.getWorkerId() << endl;
	cout << "Gaji\t\t: " << fixed << setprecision(0) << w.getSalary() << endl;

	return 0;
}