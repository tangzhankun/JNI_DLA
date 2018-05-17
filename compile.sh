#!/bin/bash
#export JAVA_HOME=
g++ -fpermissive -fPIC -I$JAVA_HOME/include -I$JAVA_HOME/include/linux -o libDLAEngineImpl.so -shared com_intel_analytics_bigdl_nn_DLAEngine.cpp 
