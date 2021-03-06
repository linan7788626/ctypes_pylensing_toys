int sign(float x);
float deg2rad(float pha);
void forward_cic(float *cic_in,float *x_in,float *y_in,float bsx,float bsy,int nx,int ny,int np,float *cic_out);
void lanczos_diff_2_tag(float *m1, float *m2, float *m11, float *m12, float *m21, float *m22, float Dcell, int Ncc, int dif_tag);
void xy_rotate(float x1_in,float x2_in,float xc1,float xc2,float pha,float *x1_out,float *x2_out);
void gauss_2d(float x1,float x2,float *par,float *res);
void tophat_2d(float x1,float x2,float *par,float *res);
void lq_nie(float x1,float x2,float *lpar,float *alpha1,float *alpha2);
void find_critical_curve(float *mu,int nx,int ny,float* res);
void tot_lq(float x1, float x2,float *lpar, int npars, float *lpars, int nsubs, float *y1, float *y2);
void tot_alphas(float x1, float x2,float *lpar, int npars, float *lpars, int nsubs, float *alpha1, float *alpha2);
void refine_critical(float * xi1,float * xi2,int nx1,int nx2,float * lpar,int npars,float * lpars, int nsubs,float * critical,int clen, int nfiner, float * yi1,float *yi2);
void srcs_images(float xi1,float xi2,float *gpar,int npars,float *gpars,int nsubs,float *g_srcs);
void lens_images(float *xi1,float *xi2,int nx1,int nx2,float *gpar,int npars,float *gpars,int nsubs,float *g_lens);
void mmbr_images(float *xi1,float *xi2,int nx1,int nx2,float *gpar,int npars,float *gpars,int nsubs,float *g_edge);
void find_caustics(float *xi1,float *xi2,int nx1,int nx2,float dsx,float *critical,float *lpar,int nlpars,float *lpars,int nlsubs,float *caustic);
void all_about_lensing(float *xi1,float *xi2,int nx1,int nx2,float * spar, int nspars, float * spars, int nssubs, float * lpar,int nlpars,float * lpars,int nlsubs,float *s_image,float *g_lensimage,float *critical,float *caustic);
void single_ray_lensing(float xi1,float xi2,float * spar, int nspars, float * spars, int nssubs, float * lpar,int nlpars,float * lpars,int nlsubs,float *s_image,float *l_image);
void cal_cc(float *xi1,float *xi2,float *al1,float *al2,int nx1,int nx2,float *lpar,int nlpars,float *lpars,int nlsubs,float *critical,float *caustic);
