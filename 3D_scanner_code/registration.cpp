#include "registration.h"


void loadData (std::string name, std::vector<PCD, Eigen::aligned_allocator<PCD> > &models, int dataS = 23)
{
  std::string extension (".pcd");

  for (int i = 1; i < dataS; i++)
  {
      std::stringstream ss;
      ss << name << i << extension;
      std::string fname = ss.str();
    // Needs to be at least 5: .plot
    if (fname.size () <= extension.size ())
      continue;

    std::transform (fname.begin (), fname.end (), fname.begin (), (int(*)(int))tolower);

    //check that the argument is a pcd file
    if (fname.compare (fname.size () - extension.size (), extension.size (), extension) == 0)
    {
      // Load the cloud and saves it into the global list of models
      PCD m;
      m.f_name = ss.str();
      pcl::io::loadPCDFile (ss.str(), *m.cloud);
      std::vector<int> indices;
      pcl::removeNaNFromPointCloud(*m.cloud,*m.cloud, indices);
      models.push_back (m);
    }
  }
}
