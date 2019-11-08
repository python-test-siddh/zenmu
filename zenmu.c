#include <Python.h>
#include <stdio.h>



static PyObject *foo_bar(PyObject *self, PyObject *args)
{
      char *_ch=" welcome  to c land";
      if (!PyArg_ParseTuple(args,"c",&_ch)) 
      {
      return NULL;
   }

    return Py_BuildValue("s", "siddh"); 
}




static PyMethodDef FooMethods[] = {
{"zenmu",  foo_bar, METH_VARARGS,"retruns a long 1"},
{NULL, NULL,0,NULL}  /* Sentinel */
};

static struct PyModuleDef foo_bar_module = {
    PyModuleDef_HEAD_INIT,
    "zenmu",
    "Python interface for the fputs C library function",
    -1,
    FooMethods
};




PyMODINIT_FUNC PyInit_zenmu(void) {
    return PyModule_Create(&foo_bar_module);
}
