/*
 * Interface for orbitfun.c
 * Routines for calculating orbital and rotational states
 * from elements
 */

// Function prototypes

void orbitParams( double a, double ecc, double obliq,
		  double omega, double nu,
		  double *r, double *dec, double *nudot );

double cosSolarZenith( double lat, double dec, double h );

double hourAngle( double t, double p );
