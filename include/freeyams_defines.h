#ifndef _H_DEFINES
#define _H_DEFINES

#ifdef __cplusplus
extern "C" {
#endif

#ifndef  TRUE
#define  TRUE   1
#define  FALSE  0
#endif

#ifndef M_PI
#define M_PI            3.14159265358979323846   /* pi   */
#define M_PI_2          1.57079632679489661923   /* pi/2 */
#endif

/* current version */
#define DEFAULT_FILE    "DEFAULT.yams"
#define RELEASE         "oct, 2006"
#define YAMS_VERSION    "2.4 b"
#define COPYRIGHT       "Copyright (C) LJLL, 1999-2006"

#define REL    1
#define ISO    4

#define  M_NOTAG        (0)
#define  M_CORNER       (1 << 0)        /* 1 corner             */
#define  M_RIDGE_REF    (1 << 1)        /* 2 edge reference     */
#define  M_RIDGE_GEO    (1 << 2)        /* 4 geometric ridge    */
#define  M_REQUIRED     (1 << 3)        /* 8 required entity    */
#define  M_TOLERANT     (1 << 5)        /* required / tolerance */
#define  M_NOMANIFOLD   (1 << 6)        /* 64 non manifold      */
#define  M_UNUSED       (1 << 7)        /* 128 vertex removed   */

#define  M_PLANAR       (0)
#define  M_CURVE        (1 << 0)

/* program parameters */
#define  M_SMOOTH       (1 << 0)
#define  M_QUERY        (1 << 1)
#define  M_DETECT       (1 << 2)
#define  M_QUADS        (1 << 3)
#define  M_BINARY       (1 << 4)
#define  M_EXTEND       (1 << 5)
#define  M_METRIC       (1 << 6)
#define  M_ENRICH       (1 << 7)
#define  M_MSH2         (1 << 8)
#define  M_EVALMAP      (1 << 9)
#define  M_OUTPUT       (1 <<10)
#define  M_VRML         (1 <<11)

/* numerical accuracy */
#define  EPS           1.e-06
#define  EPSX2         2.e-06
#define  EPS2          1.e-18
#define  EPSD          1.e-10

#define  min(a,b)       ( ((a) < (b)) ? (a) : (b) )
#define  max(a,b)       ( ((b) > (a)) ? (b) : (a) )
#define  sgn(x)         ( ((fabs((x))) < EPS2) ? 0 : ((x) < 0.0 ? -1 : 1) )

/* check if numbers are equal */ 
#define egal(x,y)   ( \
  (  ((x) == 0.0f) ? (fabs(y) < EPS) : \
   ( ((y) == 0.0f) ? (fabs(x) < EPS) : \
     (fabs((x)-(y)) / (fabs(x) + fabs(y)) < EPSX2) )  ) )


#define  SQRT2         1.414213562          /* sqrt(2)          */
#define  ISQRT2        0.707106781          /* 1./sqrt(2)       */
#define  LMAX          1.3                  /* max edge length  */
#define  PRECI         65535
#define  LONMAX          512

/* maximum numbers */
#define NEMAX        100000
#define NPMAX         50000
#define NVMAX         75000
#define NTMAX         10000
#define NHMAX        185500


/* angle limits */
#define  COS1DEG      0.999847
#define  SIN1DEG      1.74524643728351E-02
#define  COS2DEG      0.999391
#define  SIN2DEG      0.034899
#define  COS5DEG      0.9961946980917455 
#define  COS12DEG     0.978147
#define  COS20DEG     0.939692
#define  COS45DEG     0.707106
#define  GAPMIN       cos(75./180.*M_PI)
#define  RIDG         45.
#define  GEOM         33.

/* quality coeffs */
#define  QUALCOE        0.599
#define  ALPHAC        ((double)sqrt(3.) / 6.)
#define  BETAC          0.5
#define  SQRT3DIV2      0.8660254037844386
#define  SQRT3DIV4      0.4330127018922193
#define  ALFACOEFF     (1.1 / 3.464101615137755)
#define  MINRELAX       0.05


#ifdef __cplusplus
}
#endif

#endif
