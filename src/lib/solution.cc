#include "solution.h"


double Solution::FindAverage(std::vector<int> &inputs){
  if(inputs.size() == 0){
    return INT32_MIN;
  }
  double sum = 0;
  for(int i = 0; i < inputs.size(); i++){
    sum += inputs[i];
  }
  double result = sum / inputs.size();
  return result;
}
