#include <iostream>
#include "simulation/simulation.h"

using namespace irtpp;
using std::cout;

/**
 * IRTpp main
 * Main function used to test classes and implemented
 * algorithm.
 */

inline void improveIO () {
	std::ios_base::sync_with_stdio(0);
	//std::cin.tie(0); std::cout.tie(0);
}

void simulation2 ( ) {
	simulation sim;

	std::map<int, std::vector<int> > cluster;

	cluster[3] = {15, 20, 20};

	sim.simulate(2, 3, 1, "datasets/Nueva carpeta", "3D-dicho-1000x55-", 1, 0.001, true, "Gaussian", -1, cluster[3], NONE);
	sim.simulate(2, 3, 1, "datasets/Nueva carpeta", "3D-dicho-1000x55-", 1, 0.001, false, "Gaussian", -1, cluster[3], NONE);
	sim.simulate(2, 3, 1, "datasets/Nueva carpeta", "3D-dicho-1000x55-", 1, 0.001, true, "Gaussian", -1, cluster[3],
								  "datasets/Nueva carpeta/NEG_INITIAL-3D-dicho-1000x55-1.csv");
	sim.simulate(2, 3, 1, "datasets/Nueva carpeta", "3D-dicho-1000x55-", 1, 0.001, false, "Gaussian", -1, cluster[3],
								  "datasets/Nueva carpeta/NEG_INITIAL-3D-dicho-1000x55-1.csv");
	sim.simulate(2, 3, 1, "datasets/Nueva carpeta", "3D-dicho-1000x55-", 1, 0.001, true, "Gaussian", -1, cluster[3],
								  "datasets/Nueva carpeta/SUM_INITIAL-3D-dicho-1000x55-1.csv");
	sim.simulate(2, 3, 1, "datasets/Nueva carpeta", "3D-dicho-1000x55-", 1, 0.001, false, "Gaussian", -1, cluster[3],
								  "datasets/Nueva carpeta/SUM_INITIAL-3D-dicho-1000x55-1.csv");
}

void simulation1 ( ) {
	simulation sim;

	std::map<int, std::vector<int> > cluster;

	cluster[3] = {15, 20, 20};
	cluster[6] = {15, 20, 15, 25, 20, 20};
	cluster[7] = {20, 15, 25, 15, 10, 20, 20};
	cluster[10] = {20, 20, 10, 15, 15, 15, 25, 20, 25, 10};

	//3D
	sim.simulate(2, 3, 1, "datasets/3D", "3D-dicho-1000x55-", 1, 0.001, true, "Gaussian", -1, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-1000x55-", 10, 0.001, true, "Sobol", 2000, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-1000x55-", 10, 0.001, false, "Gaussian", -1, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-1000x55-", 10, 0.001, false, "Sobol", 2000, cluster[3], BUILD);
//
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-2000x55-", 10, 0.001, true, "Gaussian", -1, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-2000x55-", 10, 0.001, true, "Sobol", 2000, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-2000x55-", 10, 0.001, false, "Gaussian", -1, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-2000x55-", 10, 0.001, false, "Sobol", 2000, cluster[3], BUILD);
//
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-5000x55-", 1, 0.001, true, "Gaussian", -1, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-5000x55-", 1, 0.001, true, "Sobol", 2000, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-5000x55-", 1, 0.001, false, "Gaussian", -1, cluster[3], BUILD);
//	sim.simulate(2, 3, 10, "datasets/3D", "3D-dicho-5000x55-", 1, 0.001, false, "Sobol", 2000, cluster[3], BUILD);
//
//	//6D
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-1000x115-", 1, 0.001, true, "Sobol", 2000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-1000x115-", 1, 0.001, true, "Sobol", 5000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-1000x115-", 1, 0.001, false, "Sobol", 2000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-1000x115-", 1, 0.001, false, "Sobol", 5000, cluster[6], BUILD);
//
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-2000x115-", 1, 0.001, true, "Sobol", 2000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-2000x115-", 1, 0.001, true, "Sobol", 5000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-2000x115-", 1, 0.001, false, "Sobol", 2000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-2000x115-", 1, 0.001, false, "Sobol", 5000, cluster[6], BUILD);
//
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-5000x115-", 1, 0.001, true, "Sobol", 2000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-5000x115-", 1, 0.001, true, "Sobol", 5000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-5000x115-", 1, 0.001, false, "Sobol", 2000, cluster[6], BUILD);
//	sim.simulate(2, 6, 10, "datasets/6D", "6D-dicho-5000x115-", 1, 0.001, false, "Sobol", 5000, cluster[6], BUILD);
//
//	//7D
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-1000x125-", 1, 0.001, true, "Sobol", 2000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-1000x125-", 1, 0.001, true, "Sobol", 5000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-1000x125-", 1, 0.001, false, "Sobol", 2000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-1000x125-", 1, 0.001, false, "Sobol", 5000, cluster[7], BUILD);
//
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-2000x125-", 1, 0.001, true, "Sobol", 2000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-2000x125-", 1, 0.001, true, "Sobol", 5000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-2000x125-", 1, 0.001, false, "Sobol", 2000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-2000x125-", 1, 0.001, false, "Sobol", 5000, cluster[7], BUILD);
//
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-5000x125-", 1, 0.001, true, "Sobol", 2000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-5000x125-", 1, 0.001, true, "Sobol", 5000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-5000x125-", 1, 0.001, false, "Sobol", 2000, cluster[7], BUILD);
//	sim.simulate(2, 7, 10, "datasets/7D", "7D-dicho-5000x125-", 1, 0.001, false, "Sobol", 5000, cluster[7], BUILD);
//
//	//10D
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-1000x175-", 1, 0.001, true, "Sobol", 2000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-1000x175-", 1, 0.001, true, "Sobol", 5000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-1000x175-", 1, 0.001, false, "Sobol", 2000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-1000x175-", 1, 0.001, false, "Sobol", 5000, cluster[10], BUILD);
//
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-2000x175-", 1, 0.001, true, "Sobol", 2000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-2000x175-", 1, 0.001, true, "Sobol", 5000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-2000x175-", 1, 0.001, false, "Sobol", 2000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-2000x175-", 1, 0.001, false, "Sobol", 5000, cluster[10], BUILD);
//
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-5000x175-", 1, 0.001, true, "Sobol", 2000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-5000x175-", 1, 0.001, true, "Sobol", 5000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-5000x175-", 1, 0.001, false, "Sobol", 2000, cluster[10], BUILD);
//	sim.simulate(2, 10, 10, "datasets/10D", "10D-dicho-5000x175-", 1, 0.001, false, "Sobol", 5000, cluster[10], BUILD);
}

int sum ( std::vector<int> &v ) {
	int n = 0;
	for ( auto x : v ) n += x;
	return n;
}

void test_sobol ( ) {
	simulation sim;

	std::map<int, std::vector<int> > cluster;
	std::map<int, int> items;
	std::vector<int> sobol_points = {1000, 3000, 6000, 10000};

	cluster[3] = {15, 20, 20};
	cluster[6] = {15, 20, 15, 25, 20, 20};
	cluster[9] = {20, 20, 10, 15, 15, 15, 25, 20, 25};
	cluster[12] = {20, 20, 10, 15, 15, 15, 25, 20, 25, 10, 15, 20};
	cluster[15] = {20, 20, 10, 15, 15, 15, 25, 20, 25, 10, 15, 20, 25, 10, 15};

	for ( auto entry : cluster )
		items[entry.first] = sum(entry.second);

	for ( auto entry : items )
		for ( auto G : sobol_points ) {
			std::stringstream name;
			int d = entry.first;
			name << d << "D-dichopakage-3000x" << entry.second << "-";
			sim.simulate(2, d, 1, "datasets/sobol_testing", name.str(), 1, 0.001, true, "Sobol", G, cluster[d], BUILD);
		}
}

void test_latent_traits ( ) {
	matrix<char> Y;
	input<char> in(';');
	in.importData("datasets/3D/3D-dicho-1000x55-1.csv", Y);
	std::cout << "Data imported from " << "datasets/3D/3D-dicho-1000x55-1.csv" << std::endl;

	dichomulti::estimation e(Y, 3, 2, 0.001, EMPTY_INTEGER_VECTOR, "Sobol", 300, EMPTY_INTEGER_VECTOR, "datasets/3D/INI/INITIAL-3D-dicho-1000x55-1.csv");
	e.EMAlgortihm();
	e.print_item_parameters();
	e.EMAlgortihm();
	std::cout << e.log_likelihood() << std::endl;

//	e.print_item_parameters("datasets/2D-1000x40-estimation.csv");
//	e.load_initial_values("datasets/2D-1000x40-estimation.csv");
//	e.EAP(true);
//	e.print_latent_traits("datasets/2D-1000x40-LT-G=300-EAP2.csv");
//	e.MAP(true);
//	e.print_latent_traits("datasets/2D-1000x40-LT-G=300-MAP2.csv");
//	e.print_latent_traits();
}

int main() {
	cout.setf(std::ios_base::fixed);
	cout.precision(5);
	improveIO();

	test_latent_traits();
}
