/*
  This program and the accompanying materials are
  made available under the terms of the Eclipse Public License v2.0 which 
  accompanies this distribution, and is available at 
  https://www.eclipse.org/legal/epl-v20.html

  SPDX-License-Identifier: EPL-2.0

  Copyright Contributors to the Zowe Project.
*/

#ifndef __STCBACKGROUND__
#define __STCBACKGROUND__

#include "stcbase.h"

#define N_TASK_TABLE_ENTRIES 100
#define STC_BACKGROUND_INTERVAL 10
#define LEN_TASK_LABEL 30


typedef void (*Task)(void* server); 

typedef struct Background_Task_type {
  int id;
  char taskLabel[LEN_TASK_LABEL];
  Task task;
  int timeInterval;
  int countInterval;
} Background_Task; 

Background_Task task_list [N_TASK_TABLE_ENTRIES];

int addStcBackgroudTask(Task task, char* taskLabel, int timeInterval);
int processStcBackgroundHandler(STCBase *base, STCModule *module, int selectStatus);
#endif 
/*
  This program and the accompanying materials are
  made available under the terms of the Eclipse Public License v2.0 which 
  accompanies this distribution, and is available at 
  https://www.eclipse.org/legal/epl-v20.html

  SPDX-License-Identifier: EPL-2.0

  Copyright Contributors to the Zowe Project.
*/