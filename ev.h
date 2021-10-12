
namespace Ev {
	static long double jouleToEv = 6, 2 * 1000000000000000000;
	double getEnergy(double energy) {
		return jouleToEv*energy;
	}
}

