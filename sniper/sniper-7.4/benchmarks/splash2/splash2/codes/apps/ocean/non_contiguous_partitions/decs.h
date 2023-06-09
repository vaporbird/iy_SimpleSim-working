
/*************************************************************************/
/*                                                                       */
/*  Copyright (c) 1994 Stanford University                               */
/*                                                                       */
/*  All rights reserved.                                                 */
/*                                                                       */
/*  Permission is given to use, copy, and modify this software for any   */
/*  non-commercial purpose as long as this copyright notice is not       */
/*  removed.  All other uses, including redistribution in whole or in    */
/*  part, are forbidden without prior written permission.                */
/*                                                                       */
/*  This software is provided with absolutely no warranty and no         */
/*  support.                                                             */
/*                                                                       */
/*************************************************************************/

#define INPROCS        64
#define IMAX         1026
#define JMAX         1026
#define MAX_LEVELS     11
#define MASTER          0
#define RED_ITER        0
#define BLACK_ITER      1
#define PAGE_SIZE    4096


#include <parmacs.h>


extern struct global_struct {
   int id;
   int starttime;
   int trackstart;
   double psiai;
   double psibi;
} *global;

extern struct fields_struct {
   double psi[2][IMAX][JMAX];
   double psim[2][IMAX][JMAX];
} *fields;
  
extern struct fields2_struct {
   double psium[IMAX][JMAX];
   double psilm[IMAX][JMAX];
} *fields2;

extern struct wrk1_struct {
   double psib[IMAX][JMAX];
   double ga[IMAX][JMAX];
   double gb[IMAX][JMAX];
} *wrk1;

extern struct wrk3_struct {
   double work1[2][IMAX][JMAX];
   double work2[IMAX][JMAX];
} *wrk3;

extern struct wrk2_struct {
   double work3[IMAX][JMAX];
   double f[IMAX];
} *wrk2;

extern struct wrk4_struct {
   double work4[2][IMAX][JMAX];
   double work5[2][IMAX][JMAX];
} *wrk4;

extern struct wrk6_struct {
   double work6[IMAX][JMAX];
} *wrk6;

extern struct wrk5_struct {
   double work7[2][IMAX][JMAX];
   double temparray[2][IMAX][JMAX];
} *wrk5;

extern struct frcng_struct {
   double tauz[IMAX][JMAX];
} *frcng;

extern struct iter_struct {
   int notdone;
   double work8[IMAX][JMAX];
   double work9[IMAX][JMAX];
} *iter;

extern struct guess_struct {
   double oldga[IMAX][JMAX];
   double oldgb[IMAX][JMAX];
} *guess;

extern struct multi_struct {
   double q_multi[MAX_LEVELS][IMAX][JMAX];
   double rhs_multi[MAX_LEVELS][IMAX][JMAX];
   double err_multi;
   int numspin;
   int spinflag[INPROCS];
} *multi;

extern struct locks_struct {
   pthread_mutex_t (idlock);
   pthread_mutex_t (psiailock);
   pthread_mutex_t (psibilock);
   pthread_mutex_t (donelock);
   pthread_mutex_t (error_lock);
   pthread_mutex_t (bar_lock);
} *locks;
 
extern struct bars_struct {
   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (iteration);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (gsudn);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (p_setup);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (p_redph);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (p_soln);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (p_subph);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_prini);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_psini);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_onetime);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_1);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_2);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_3);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_4);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_5);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_6);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_7);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_8);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_9);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (sl_phase_10);

   
struct {
	pthread_mutex_t	mutex;
	pthread_cond_t	cv;
	unsigned long	counter;
	unsigned long	cycle;
} (error_barrier);

} *bars;

extern double eig2;
extern double ysca;
extern int jmm1;
extern double pi;
extern double t0;

extern int *procmap;
extern int xprocs;
extern int yprocs;

extern int numlev;
extern int imx[MAX_LEVELS];
extern int jmx[MAX_LEVELS];
extern double lev_res[MAX_LEVELS];
extern double lev_tol[MAX_LEVELS];
extern double maxwork;
extern int minlevel;
extern double outday0;
extern double outday1;
extern double outday2;
extern double outday3;

extern int nprocs;

extern double h1;
extern double h3;
extern double h;
extern double lf;
extern double res;
extern double dtau;
extern double f0;
extern double beta;
extern double gpr;
extern int im;
extern int jm;
extern int do_stats;
extern int do_output;
extern int *multi_times;
extern int *total_times;
extern double factjacob;
extern double factlap;

extern struct Global_Private {
  char pad[PAGE_SIZE];
  double multi_time;
  double total_time;
  int rel_start_x[MAX_LEVELS];
  int rel_start_y[MAX_LEVELS];
  int rel_num_x[MAX_LEVELS];
  int rel_num_y[MAX_LEVELS];
  int eist[MAX_LEVELS];
  int ejst[MAX_LEVELS];
  int oist[MAX_LEVELS];
  int ojst[MAX_LEVELS];
  int eiest[MAX_LEVELS];
  int ejest[MAX_LEVELS];
  int oiest[MAX_LEVELS];
  int ojest[MAX_LEVELS];
  int rlist[MAX_LEVELS];
  int rljst[MAX_LEVELS];
  int rlien[MAX_LEVELS];
  int rljen[MAX_LEVELS];
  int iist[MAX_LEVELS];
  int ijst[MAX_LEVELS];
  int iien[MAX_LEVELS];
  int ijen[MAX_LEVELS];
  int pist[MAX_LEVELS];
  int pjst[MAX_LEVELS];
  int pien[MAX_LEVELS];
  int pjen[MAX_LEVELS];
} *gp;

extern double i_int_coeff[MAX_LEVELS];
extern double j_int_coeff[MAX_LEVELS];
extern int minlev;

