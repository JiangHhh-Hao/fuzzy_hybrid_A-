# Fuzzified Hybrid A* for Motion Planning
## Overview
This project explores the integration of fuzzy logic with the Hybrid A* algorithm to improve motion planning in uncertain and dynamic environments. By incorporating fuzzy membership functions into cost evaluation, the planner is able to represent uncertainty in obstacle distance, terrian slope, ground friction, heading error, curvature more flexibly compared to crisp thresholds.
## Motivation
Classical Hybrid A* works well for structured environments but struggles when: 

- Environment sensing introduces noise (e.g., LiDAR uncertainty)
- Binary collision checks are too rigid
- Cost calculations are deterministic 
- Small perturbations lead to large planning changes

A fuzzified cost model can provide smoother decision boundaries and allow more robust handling of uncertain inputs.

## Key Contributions
TBD

## Methods
Base Planner: Hybrid A* (continuous state lattice + analytic expansion)
Fuzzy Operators
Evaluation Metrics: trajectory smoothness, success rate, computation time

## Results (Preliminary)
TBD



