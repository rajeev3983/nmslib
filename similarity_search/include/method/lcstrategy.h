#ifndef _LIST_OF_CLUSTERS_STRAT_H_
#define _LIST_OF_CLUSTERS_STRAT_H_

#include <iostream>

namespace similarity {

enum class ListClustersStrategy {
  kRandom,                   // random
  kClosestPrevCenter,        // closest to the previous selected center
  kFarthestPrevCenter,       // farthest from the previous selected center
  kMinSumDistPrevCenters,    // minimize the sum of dist-s to prev.centers
  kMaxSumDistPrevCenters     // maximize the sum of dist-s to prev.centers
};

inline std::ostream& operator<<(std::ostream& o, ListClustersStrategy v) {
  switch (v) {
    case ListClustersStrategy::kRandom:
      return o << "random";
    case ListClustersStrategy::kClosestPrevCenter:
      return o << "closestPrevCenter";
    case ListClustersStrategy::kFarthestPrevCenter:
      return o << "farthestPrevCenter";
    case ListClustersStrategy::kMinSumDistPrevCenters:
      return o << "minSumDistPrevCenters";
    case ListClustersStrategy::kMaxSumDistPrevCenters:
      return o << "maxSumDistPrevCenters";
  }
  return o << "unknown";
}

}

#endif
