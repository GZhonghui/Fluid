#include"fluid.h"

#include"surface.h"

void work_generate(unsigned int thread_id,int l_index,int r_index,bool *done);

void Solver::init_particles()
{
    for(int i=1;i<=particle_range[1];i+=1)
    {
        for(int j=1;j<=particle_range[2];j+=1)
        {
            for(int k=1;k<=particle_range[3];k+=1)
            {
                Point now(i+start_pos[1]-1,j+start_pos[2]-1,k+start_pos[3]-1);
                particles.push_back(now);
            }
        }
    }
}
void Solver::fill_surface(std::vector<Object *> &objects)
{
    generate_next();

    Surface surface;
    surface.fill_surface(particles,objects);
}
void Solver::generate_next()
{

}
void Solver::load_assets()
{
    while(false);
}
double Solver::poly6_wkernel(const Vectorf &r)
{
    return 0;
}
double Solver::spiky_wkernel_grad(const Vectorf &r)
{
    return 0;
}
void Solver::compute_density(unsigned int particle_index)
{

}
void Solver::compute_lagrange_multiplier(unsigned int particle_index)
{

}
void Solver::solve_density_constraint(unsigned int particle_index)
{

}
void Solver::update_velocity(unsigned int particle_index)
{

}
void Solver::apply_gravity(unsigned int particle_index)
{

}
void Solver::constraint_projection()
{

}
void Solver::compute_xsph_viscosity()
{

}

void work_generate(unsigned int thread_id,int l_index,int r_index,bool *done)
{
    
}
