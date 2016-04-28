add_executable(json_parse_error main.cc)

target_link_libraries(json_parse_error
  ${OPENSSL_LIBRARIES}
  ${CASABLANCA_LIBRARIES}
  ${Boost_SYSTEM_LIBRARY}
  ${Boost_THREAD_LIBRARY}
  ${Boost_ATOMIC_LIBRARY}
  ${Boost_CHRONO_LIBRARY}
  ${Boost_RANDOM_LIBRARY}
  ${CMAKE_THREAD_LIBS_INIT}
  )
