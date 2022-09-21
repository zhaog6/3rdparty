/*
 *  dataff.h
 *  
 *
 *  Created by Fr\E9d\E9ric Hecht on 19/06/11.
 *  Copyright 2011 UPMC. All rights reserved.
 *
 
 */

enum ff_data_type {
    ff_id_vertex =0,
    ff_id_seg =1,
    ff_id_tria=2,
    ff_id_tet =3,

    ff_id_prism =5,
    ff_id_hex =6,
    ff_id_quad =7,
    ff_id_corner=8
} ;


typedef struct  DataFF 
{
  const char  * meshname;
  const char  * movename;
  const char  * solname;
  int imprim;
  int memory;
  int   np; //  nb of vertices  in/out 
  int   typesol; //  1 iso , 6 : m11; m12,m13,m22,m23,m33
  void * mesh;
  double * sol; /* metric :size typesol*np  */
  double * mov; /* displac. size :3*np  */ 
  void (*set_mesh)(void *dataff,int *data,int ldata);
  void (*end_mesh)(void *dataff);
  void (*set_v)(void *dataff,int i,double *xyz,int lab);
  void (*set_elmt)(void *dataff,int ff_id,int i,int *k,int lab);
  void (*get_mesh)(void *dataff,int *data,int ldata);
  void (*get_v3)(void *dataff,int i,double *xyz,int *lab);
  void (*get_elmt)(void *dataff,int ff_id,int i,int *k,int *lab);
} DataFF;

#ifdef __cplusplus
extern "C" {
#endif  
    int mainmmg3d(int argc,char *argv[],DataFF *dataff); 

#ifdef __cplusplus
}
#endif 
/*
 m11 = met[0] 
 m12 = met[1] 
 m13 = met[2] 
 m22 = met[3]
 m23 = met[4] 
 m33 = met[5]  
*/
