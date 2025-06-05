#include <stdio.h>
#include <cjson/cJSON.h>
#include "json.h"
#include <stdlib.h>

void crear_json() {

    cJSON *objeto = cJSON_CreateObject();
   cJSON_AddStringToObject(objeto, "Nombre", "Harrison Martinez Herrera");
   cJSON_AddNumberToObject(objeto, "Edad", 22);
   cJSON_AddStringToObject(objeto, "Carnet", "C24585");
   char *json_str = cJSON_Print(objeto);

   FILE *archivo = fopen("datos.json", "w");
    if (archivo != NULL) {
        fputs(json_str, archivo);
        fclose(archivo);
    } else {
        perror("No se pudo abrir el archivo JSON");
    }

    free(json_str); 
    cJSON_Delete(objeto);
}