
class Erg {
	static double jouleToErg = 10000000;
private:
	double _energy;
public:
	int getEnergy() {
		return _energy;
	}
	void setEnergy(double energy) {
		_energy = energy * jouleToErg;
	}
};

