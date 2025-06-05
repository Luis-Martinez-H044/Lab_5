project('proyecto_json', 'c', version : '0.1')

src = files('src/main.c', 'src/json.c')

incdir = include_directories('/usr/include/cjson')

executable('proyecto', src,
  include_directories : incdir,
  link_args : ['-lcjson'],
  install : false
)