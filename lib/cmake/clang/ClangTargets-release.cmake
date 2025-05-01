#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "clang-tblgen" for configuration "Release"
set_property(TARGET clang-tblgen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-tblgen PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-tblgen.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-tblgen )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-tblgen "${_IMPORT_PREFIX}/bin/clang-tblgen.exe" )

# Import target "clangBasic" for configuration "Release"
set_property(TARGET clangBasic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangBasic PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangBasic.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangBasic )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangBasic "${_IMPORT_PREFIX}/lib/clangBasic.lib" )

# Import target "clangAPINotes" for configuration "Release"
set_property(TARGET clangAPINotes APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAPINotes PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangAPINotes.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAPINotes )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAPINotes "${_IMPORT_PREFIX}/lib/clangAPINotes.lib" )

# Import target "clangLex" for configuration "Release"
set_property(TARGET clangLex APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangLex PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangLex.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangLex )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangLex "${_IMPORT_PREFIX}/lib/clangLex.lib" )

# Import target "clangParse" for configuration "Release"
set_property(TARGET clangParse APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangParse PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangParse.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangParse )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangParse "${_IMPORT_PREFIX}/lib/clangParse.lib" )

# Import target "clangAST" for configuration "Release"
set_property(TARGET clangAST APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAST PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangAST.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAST )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAST "${_IMPORT_PREFIX}/lib/clangAST.lib" )

# Import target "clangDynamicASTMatchers" for configuration "Release"
set_property(TARGET clangDynamicASTMatchers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDynamicASTMatchers PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangDynamicASTMatchers.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDynamicASTMatchers )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDynamicASTMatchers "${_IMPORT_PREFIX}/lib/clangDynamicASTMatchers.lib" )

# Import target "clangASTMatchers" for configuration "Release"
set_property(TARGET clangASTMatchers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangASTMatchers PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangASTMatchers.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangASTMatchers )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangASTMatchers "${_IMPORT_PREFIX}/lib/clangASTMatchers.lib" )

# Import target "clangCrossTU" for configuration "Release"
set_property(TARGET clangCrossTU APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangCrossTU PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangCrossTU.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangCrossTU )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangCrossTU "${_IMPORT_PREFIX}/lib/clangCrossTU.lib" )

# Import target "clangSema" for configuration "Release"
set_property(TARGET clangSema APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangSema PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangSema.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangSema )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangSema "${_IMPORT_PREFIX}/lib/clangSema.lib" )

# Import target "clangCodeGen" for configuration "Release"
set_property(TARGET clangCodeGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangCodeGen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangCodeGen.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangCodeGen )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangCodeGen "${_IMPORT_PREFIX}/lib/clangCodeGen.lib" )

# Import target "clangAnalysis" for configuration "Release"
set_property(TARGET clangAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAnalysis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangAnalysis.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAnalysis )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAnalysis "${_IMPORT_PREFIX}/lib/clangAnalysis.lib" )

# Import target "clangAnalysisFlowSensitive" for configuration "Release"
set_property(TARGET clangAnalysisFlowSensitive APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAnalysisFlowSensitive PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangAnalysisFlowSensitive.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAnalysisFlowSensitive )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAnalysisFlowSensitive "${_IMPORT_PREFIX}/lib/clangAnalysisFlowSensitive.lib" )

# Import target "clangAnalysisFlowSensitiveModels" for configuration "Release"
set_property(TARGET clangAnalysisFlowSensitiveModels APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAnalysisFlowSensitiveModels PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangAnalysisFlowSensitiveModels.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAnalysisFlowSensitiveModels )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAnalysisFlowSensitiveModels "${_IMPORT_PREFIX}/lib/clangAnalysisFlowSensitiveModels.lib" )

# Import target "clangEdit" for configuration "Release"
set_property(TARGET clangEdit APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangEdit PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangEdit.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangEdit )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangEdit "${_IMPORT_PREFIX}/lib/clangEdit.lib" )

# Import target "clangExtractAPI" for configuration "Release"
set_property(TARGET clangExtractAPI APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangExtractAPI PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangExtractAPI.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangExtractAPI )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangExtractAPI "${_IMPORT_PREFIX}/lib/clangExtractAPI.lib" )

# Import target "clangRewrite" for configuration "Release"
set_property(TARGET clangRewrite APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangRewrite PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangRewrite.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangRewrite )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangRewrite "${_IMPORT_PREFIX}/lib/clangRewrite.lib" )

# Import target "clangARCMigrate" for configuration "Release"
set_property(TARGET clangARCMigrate APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangARCMigrate PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangARCMigrate.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangARCMigrate )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangARCMigrate "${_IMPORT_PREFIX}/lib/clangARCMigrate.lib" )

# Import target "clangDriver" for configuration "Release"
set_property(TARGET clangDriver APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDriver PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangDriver.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDriver )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDriver "${_IMPORT_PREFIX}/lib/clangDriver.lib" )

# Import target "clangSerialization" for configuration "Release"
set_property(TARGET clangSerialization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangSerialization PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangSerialization.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangSerialization )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangSerialization "${_IMPORT_PREFIX}/lib/clangSerialization.lib" )

# Import target "clangRewriteFrontend" for configuration "Release"
set_property(TARGET clangRewriteFrontend APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangRewriteFrontend PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangRewriteFrontend.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangRewriteFrontend )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangRewriteFrontend "${_IMPORT_PREFIX}/lib/clangRewriteFrontend.lib" )

# Import target "clangFrontend" for configuration "Release"
set_property(TARGET clangFrontend APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangFrontend PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangFrontend.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangFrontend )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangFrontend "${_IMPORT_PREFIX}/lib/clangFrontend.lib" )

# Import target "clangFrontendTool" for configuration "Release"
set_property(TARGET clangFrontendTool APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangFrontendTool PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangFrontendTool.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangFrontendTool )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangFrontendTool "${_IMPORT_PREFIX}/lib/clangFrontendTool.lib" )

# Import target "clangToolingCore" for configuration "Release"
set_property(TARGET clangToolingCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingCore PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangToolingCore.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingCore "${_IMPORT_PREFIX}/lib/clangToolingCore.lib" )

# Import target "clangToolingInclusions" for configuration "Release"
set_property(TARGET clangToolingInclusions APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingInclusions PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangToolingInclusions.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingInclusions )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingInclusions "${_IMPORT_PREFIX}/lib/clangToolingInclusions.lib" )

# Import target "clangToolingInclusionsStdlib" for configuration "Release"
set_property(TARGET clangToolingInclusionsStdlib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingInclusionsStdlib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangToolingInclusionsStdlib.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingInclusionsStdlib )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingInclusionsStdlib "${_IMPORT_PREFIX}/lib/clangToolingInclusionsStdlib.lib" )

# Import target "clangToolingRefactoring" for configuration "Release"
set_property(TARGET clangToolingRefactoring APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingRefactoring PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangToolingRefactoring.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingRefactoring )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingRefactoring "${_IMPORT_PREFIX}/lib/clangToolingRefactoring.lib" )

# Import target "clangToolingASTDiff" for configuration "Release"
set_property(TARGET clangToolingASTDiff APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingASTDiff PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangToolingASTDiff.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingASTDiff )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingASTDiff "${_IMPORT_PREFIX}/lib/clangToolingASTDiff.lib" )

# Import target "clangToolingSyntax" for configuration "Release"
set_property(TARGET clangToolingSyntax APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingSyntax PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangToolingSyntax.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingSyntax )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingSyntax "${_IMPORT_PREFIX}/lib/clangToolingSyntax.lib" )

# Import target "clangDependencyScanning" for configuration "Release"
set_property(TARGET clangDependencyScanning APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDependencyScanning PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangDependencyScanning.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDependencyScanning )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDependencyScanning "${_IMPORT_PREFIX}/lib/clangDependencyScanning.lib" )

# Import target "clangTransformer" for configuration "Release"
set_property(TARGET clangTransformer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTransformer PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTransformer.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTransformer )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTransformer "${_IMPORT_PREFIX}/lib/clangTransformer.lib" )

# Import target "clangTooling" for configuration "Release"
set_property(TARGET clangTooling APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTooling PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTooling.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTooling )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTooling "${_IMPORT_PREFIX}/lib/clangTooling.lib" )

# Import target "clangDirectoryWatcher" for configuration "Release"
set_property(TARGET clangDirectoryWatcher APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDirectoryWatcher PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangDirectoryWatcher.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDirectoryWatcher )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDirectoryWatcher "${_IMPORT_PREFIX}/lib/clangDirectoryWatcher.lib" )

# Import target "clangIndex" for configuration "Release"
set_property(TARGET clangIndex APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangIndex PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangIndex.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangIndex )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangIndex "${_IMPORT_PREFIX}/lib/clangIndex.lib" )

# Import target "clangIndexSerialization" for configuration "Release"
set_property(TARGET clangIndexSerialization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangIndexSerialization PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangIndexSerialization.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangIndexSerialization )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangIndexSerialization "${_IMPORT_PREFIX}/lib/clangIndexSerialization.lib" )

# Import target "clangInstallAPI" for configuration "Release"
set_property(TARGET clangInstallAPI APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangInstallAPI PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangInstallAPI.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangInstallAPI )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangInstallAPI "${_IMPORT_PREFIX}/lib/clangInstallAPI.lib" )

# Import target "clangStaticAnalyzerCore" for configuration "Release"
set_property(TARGET clangStaticAnalyzerCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangStaticAnalyzerCore PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangStaticAnalyzerCore.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangStaticAnalyzerCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangStaticAnalyzerCore "${_IMPORT_PREFIX}/lib/clangStaticAnalyzerCore.lib" )

# Import target "clangStaticAnalyzerCheckers" for configuration "Release"
set_property(TARGET clangStaticAnalyzerCheckers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangStaticAnalyzerCheckers PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangStaticAnalyzerCheckers.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangStaticAnalyzerCheckers )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangStaticAnalyzerCheckers "${_IMPORT_PREFIX}/lib/clangStaticAnalyzerCheckers.lib" )

# Import target "clangStaticAnalyzerFrontend" for configuration "Release"
set_property(TARGET clangStaticAnalyzerFrontend APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangStaticAnalyzerFrontend PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangStaticAnalyzerFrontend.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangStaticAnalyzerFrontend )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangStaticAnalyzerFrontend "${_IMPORT_PREFIX}/lib/clangStaticAnalyzerFrontend.lib" )

# Import target "clangFormat" for configuration "Release"
set_property(TARGET clangFormat APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangFormat PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangFormat.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangFormat )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangFormat "${_IMPORT_PREFIX}/lib/clangFormat.lib" )

# Import target "clangInterpreter" for configuration "Release"
set_property(TARGET clangInterpreter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangInterpreter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangInterpreter.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangInterpreter )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangInterpreter "${_IMPORT_PREFIX}/lib/clangInterpreter.lib" )

# Import target "clangSupport" for configuration "Release"
set_property(TARGET clangSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangSupport.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangSupport )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangSupport "${_IMPORT_PREFIX}/lib/clangSupport.lib" )

# Import target "diagtool" for configuration "Release"
set_property(TARGET diagtool APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(diagtool PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/diagtool.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS diagtool )
list(APPEND _IMPORT_CHECK_FILES_FOR_diagtool "${_IMPORT_PREFIX}/bin/diagtool.exe" )

# Import target "clang" for configuration "Release"
set_property(TARGET clang APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang "${_IMPORT_PREFIX}/bin/clang.exe" )

# Import target "clang-format" for configuration "Release"
set_property(TARGET clang-format APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-format PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-format.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-format )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-format "${_IMPORT_PREFIX}/bin/clang-format.exe" )

# Import target "clangHandleCXX" for configuration "Release"
set_property(TARGET clangHandleCXX APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangHandleCXX PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangHandleCXX.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangHandleCXX )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangHandleCXX "${_IMPORT_PREFIX}/lib/clangHandleCXX.lib" )

# Import target "clangHandleLLVM" for configuration "Release"
set_property(TARGET clangHandleLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangHandleLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangHandleLLVM.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangHandleLLVM )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangHandleLLVM "${_IMPORT_PREFIX}/lib/clangHandleLLVM.lib" )

# Import target "clang-linker-wrapper" for configuration "Release"
set_property(TARGET clang-linker-wrapper APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-linker-wrapper PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-linker-wrapper.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-linker-wrapper )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-linker-wrapper "${_IMPORT_PREFIX}/bin/clang-linker-wrapper.exe" )

# Import target "clang-nvlink-wrapper" for configuration "Release"
set_property(TARGET clang-nvlink-wrapper APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-nvlink-wrapper PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-nvlink-wrapper.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-nvlink-wrapper )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-nvlink-wrapper "${_IMPORT_PREFIX}/bin/clang-nvlink-wrapper.exe" )

# Import target "clang-offload-packager" for configuration "Release"
set_property(TARGET clang-offload-packager APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-offload-packager PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-offload-packager.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-offload-packager )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-offload-packager "${_IMPORT_PREFIX}/bin/clang-offload-packager.exe" )

# Import target "clang-offload-bundler" for configuration "Release"
set_property(TARGET clang-offload-bundler APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-offload-bundler PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-offload-bundler.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-offload-bundler )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-offload-bundler "${_IMPORT_PREFIX}/bin/clang-offload-bundler.exe" )

# Import target "clang-scan-deps" for configuration "Release"
set_property(TARGET clang-scan-deps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-scan-deps PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-scan-deps.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-scan-deps )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-scan-deps "${_IMPORT_PREFIX}/bin/clang-scan-deps.exe" )

# Import target "clang-installapi" for configuration "Release"
set_property(TARGET clang-installapi APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-installapi PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-installapi.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-installapi )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-installapi "${_IMPORT_PREFIX}/bin/clang-installapi.exe" )

# Import target "clang-repl" for configuration "Release"
set_property(TARGET clang-repl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-repl PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-repl.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-repl )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-repl "${_IMPORT_PREFIX}/bin/clang-repl.exe" )

# Import target "clang-rename" for configuration "Release"
set_property(TARGET clang-rename APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-rename PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-rename.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-rename )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-rename "${_IMPORT_PREFIX}/bin/clang-rename.exe" )

# Import target "clang-refactor" for configuration "Release"
set_property(TARGET clang-refactor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-refactor PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-refactor.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-refactor )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-refactor "${_IMPORT_PREFIX}/bin/clang-refactor.exe" )

# Import target "clang-check" for configuration "Release"
set_property(TARGET clang-check APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-check PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-check.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-check )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-check "${_IMPORT_PREFIX}/bin/clang-check.exe" )

# Import target "clang-extdef-mapping" for configuration "Release"
set_property(TARGET clang-extdef-mapping APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-extdef-mapping PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-extdef-mapping.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-extdef-mapping )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-extdef-mapping "${_IMPORT_PREFIX}/bin/clang-extdef-mapping.exe" )

# Import target "clangApplyReplacements" for configuration "Release"
set_property(TARGET clangApplyReplacements APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangApplyReplacements PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangApplyReplacements.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangApplyReplacements )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangApplyReplacements "${_IMPORT_PREFIX}/lib/clangApplyReplacements.lib" )

# Import target "clang-apply-replacements" for configuration "Release"
set_property(TARGET clang-apply-replacements APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-apply-replacements PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-apply-replacements.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-apply-replacements )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-apply-replacements "${_IMPORT_PREFIX}/bin/clang-apply-replacements.exe" )

# Import target "clangReorderFields" for configuration "Release"
set_property(TARGET clangReorderFields APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangReorderFields PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangReorderFields.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangReorderFields )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangReorderFields "${_IMPORT_PREFIX}/lib/clangReorderFields.lib" )

# Import target "clang-reorder-fields" for configuration "Release"
set_property(TARGET clang-reorder-fields APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-reorder-fields PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-reorder-fields.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-reorder-fields )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-reorder-fields "${_IMPORT_PREFIX}/bin/clang-reorder-fields.exe" )

# Import target "modularize" for configuration "Release"
set_property(TARGET modularize APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(modularize PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/modularize.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS modularize )
list(APPEND _IMPORT_CHECK_FILES_FOR_modularize "${_IMPORT_PREFIX}/bin/modularize.exe" )

# Import target "clangTidy" for configuration "Release"
set_property(TARGET clangTidy APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidy PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidy.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidy )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidy "${_IMPORT_PREFIX}/lib/clangTidy.lib" )

# Import target "clangTidyAndroidModule" for configuration "Release"
set_property(TARGET clangTidyAndroidModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyAndroidModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyAndroidModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyAndroidModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyAndroidModule "${_IMPORT_PREFIX}/lib/clangTidyAndroidModule.lib" )

# Import target "clangTidyAbseilModule" for configuration "Release"
set_property(TARGET clangTidyAbseilModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyAbseilModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyAbseilModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyAbseilModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyAbseilModule "${_IMPORT_PREFIX}/lib/clangTidyAbseilModule.lib" )

# Import target "clangTidyAlteraModule" for configuration "Release"
set_property(TARGET clangTidyAlteraModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyAlteraModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyAlteraModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyAlteraModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyAlteraModule "${_IMPORT_PREFIX}/lib/clangTidyAlteraModule.lib" )

# Import target "clangTidyBoostModule" for configuration "Release"
set_property(TARGET clangTidyBoostModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyBoostModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyBoostModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyBoostModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyBoostModule "${_IMPORT_PREFIX}/lib/clangTidyBoostModule.lib" )

# Import target "clangTidyBugproneModule" for configuration "Release"
set_property(TARGET clangTidyBugproneModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyBugproneModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyBugproneModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyBugproneModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyBugproneModule "${_IMPORT_PREFIX}/lib/clangTidyBugproneModule.lib" )

# Import target "clangTidyCERTModule" for configuration "Release"
set_property(TARGET clangTidyCERTModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyCERTModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyCERTModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyCERTModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyCERTModule "${_IMPORT_PREFIX}/lib/clangTidyCERTModule.lib" )

# Import target "clangTidyConcurrencyModule" for configuration "Release"
set_property(TARGET clangTidyConcurrencyModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyConcurrencyModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyConcurrencyModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyConcurrencyModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyConcurrencyModule "${_IMPORT_PREFIX}/lib/clangTidyConcurrencyModule.lib" )

# Import target "clangTidyCppCoreGuidelinesModule" for configuration "Release"
set_property(TARGET clangTidyCppCoreGuidelinesModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyCppCoreGuidelinesModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyCppCoreGuidelinesModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyCppCoreGuidelinesModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyCppCoreGuidelinesModule "${_IMPORT_PREFIX}/lib/clangTidyCppCoreGuidelinesModule.lib" )

# Import target "clangTidyDarwinModule" for configuration "Release"
set_property(TARGET clangTidyDarwinModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyDarwinModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyDarwinModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyDarwinModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyDarwinModule "${_IMPORT_PREFIX}/lib/clangTidyDarwinModule.lib" )

# Import target "clangTidyFuchsiaModule" for configuration "Release"
set_property(TARGET clangTidyFuchsiaModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyFuchsiaModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyFuchsiaModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyFuchsiaModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyFuchsiaModule "${_IMPORT_PREFIX}/lib/clangTidyFuchsiaModule.lib" )

# Import target "clangTidyGoogleModule" for configuration "Release"
set_property(TARGET clangTidyGoogleModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyGoogleModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyGoogleModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyGoogleModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyGoogleModule "${_IMPORT_PREFIX}/lib/clangTidyGoogleModule.lib" )

# Import target "clangTidyHICPPModule" for configuration "Release"
set_property(TARGET clangTidyHICPPModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyHICPPModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyHICPPModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyHICPPModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyHICPPModule "${_IMPORT_PREFIX}/lib/clangTidyHICPPModule.lib" )

# Import target "clangTidyLinuxKernelModule" for configuration "Release"
set_property(TARGET clangTidyLinuxKernelModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyLinuxKernelModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyLinuxKernelModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyLinuxKernelModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyLinuxKernelModule "${_IMPORT_PREFIX}/lib/clangTidyLinuxKernelModule.lib" )

# Import target "clangTidyLLVMModule" for configuration "Release"
set_property(TARGET clangTidyLLVMModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyLLVMModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyLLVMModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyLLVMModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyLLVMModule "${_IMPORT_PREFIX}/lib/clangTidyLLVMModule.lib" )

# Import target "clangTidyLLVMLibcModule" for configuration "Release"
set_property(TARGET clangTidyLLVMLibcModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyLLVMLibcModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyLLVMLibcModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyLLVMLibcModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyLLVMLibcModule "${_IMPORT_PREFIX}/lib/clangTidyLLVMLibcModule.lib" )

# Import target "clangTidyMiscModule" for configuration "Release"
set_property(TARGET clangTidyMiscModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyMiscModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyMiscModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyMiscModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyMiscModule "${_IMPORT_PREFIX}/lib/clangTidyMiscModule.lib" )

# Import target "clangTidyModernizeModule" for configuration "Release"
set_property(TARGET clangTidyModernizeModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyModernizeModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyModernizeModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyModernizeModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyModernizeModule "${_IMPORT_PREFIX}/lib/clangTidyModernizeModule.lib" )

# Import target "clangTidyMPIModule" for configuration "Release"
set_property(TARGET clangTidyMPIModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyMPIModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyMPIModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyMPIModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyMPIModule "${_IMPORT_PREFIX}/lib/clangTidyMPIModule.lib" )

# Import target "clangTidyObjCModule" for configuration "Release"
set_property(TARGET clangTidyObjCModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyObjCModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyObjCModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyObjCModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyObjCModule "${_IMPORT_PREFIX}/lib/clangTidyObjCModule.lib" )

# Import target "clangTidyOpenMPModule" for configuration "Release"
set_property(TARGET clangTidyOpenMPModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyOpenMPModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyOpenMPModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyOpenMPModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyOpenMPModule "${_IMPORT_PREFIX}/lib/clangTidyOpenMPModule.lib" )

# Import target "clangTidyPerformanceModule" for configuration "Release"
set_property(TARGET clangTidyPerformanceModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyPerformanceModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyPerformanceModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyPerformanceModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyPerformanceModule "${_IMPORT_PREFIX}/lib/clangTidyPerformanceModule.lib" )

# Import target "clangTidyPortabilityModule" for configuration "Release"
set_property(TARGET clangTidyPortabilityModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyPortabilityModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyPortabilityModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyPortabilityModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyPortabilityModule "${_IMPORT_PREFIX}/lib/clangTidyPortabilityModule.lib" )

# Import target "clangTidyReadabilityModule" for configuration "Release"
set_property(TARGET clangTidyReadabilityModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyReadabilityModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyReadabilityModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyReadabilityModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyReadabilityModule "${_IMPORT_PREFIX}/lib/clangTidyReadabilityModule.lib" )

# Import target "clangTidyZirconModule" for configuration "Release"
set_property(TARGET clangTidyZirconModule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyZirconModule PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyZirconModule.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyZirconModule )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyZirconModule "${_IMPORT_PREFIX}/lib/clangTidyZirconModule.lib" )

# Import target "clangTidyPlugin" for configuration "Release"
set_property(TARGET clangTidyPlugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyPlugin PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyPlugin.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyPlugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyPlugin "${_IMPORT_PREFIX}/lib/clangTidyPlugin.lib" )

# Import target "clangTidyMain" for configuration "Release"
set_property(TARGET clangTidyMain APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyMain PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyMain.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyMain )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyMain "${_IMPORT_PREFIX}/lib/clangTidyMain.lib" )

# Import target "clang-tidy" for configuration "Release"
set_property(TARGET clang-tidy APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-tidy PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-tidy.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-tidy )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-tidy "${_IMPORT_PREFIX}/bin/clang-tidy.exe" )

# Import target "clangTidyUtils" for configuration "Release"
set_property(TARGET clangTidyUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTidyUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangTidyUtils.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTidyUtils )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTidyUtils "${_IMPORT_PREFIX}/lib/clangTidyUtils.lib" )

# Import target "clangChangeNamespace" for configuration "Release"
set_property(TARGET clangChangeNamespace APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangChangeNamespace PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangChangeNamespace.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangChangeNamespace )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangChangeNamespace "${_IMPORT_PREFIX}/lib/clangChangeNamespace.lib" )

# Import target "clang-change-namespace" for configuration "Release"
set_property(TARGET clang-change-namespace APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-change-namespace PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-change-namespace.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-change-namespace )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-change-namespace "${_IMPORT_PREFIX}/bin/clang-change-namespace.exe" )

# Import target "clangDoc" for configuration "Release"
set_property(TARGET clangDoc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDoc PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangDoc.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDoc )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDoc "${_IMPORT_PREFIX}/lib/clangDoc.lib" )

# Import target "clang-doc" for configuration "Release"
set_property(TARGET clang-doc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-doc PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-doc.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-doc )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-doc "${_IMPORT_PREFIX}/bin/clang-doc.exe" )

# Import target "clangIncludeFixer" for configuration "Release"
set_property(TARGET clangIncludeFixer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangIncludeFixer PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangIncludeFixer.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangIncludeFixer )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangIncludeFixer "${_IMPORT_PREFIX}/lib/clangIncludeFixer.lib" )

# Import target "clangIncludeFixerPlugin" for configuration "Release"
set_property(TARGET clangIncludeFixerPlugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangIncludeFixerPlugin PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangIncludeFixerPlugin.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangIncludeFixerPlugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangIncludeFixerPlugin "${_IMPORT_PREFIX}/lib/clangIncludeFixerPlugin.lib" )

# Import target "clang-include-fixer" for configuration "Release"
set_property(TARGET clang-include-fixer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-include-fixer PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-include-fixer.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-include-fixer )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-include-fixer "${_IMPORT_PREFIX}/bin/clang-include-fixer.exe" )

# Import target "findAllSymbols" for configuration "Release"
set_property(TARGET findAllSymbols APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(findAllSymbols PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/findAllSymbols.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS findAllSymbols )
list(APPEND _IMPORT_CHECK_FILES_FOR_findAllSymbols "${_IMPORT_PREFIX}/lib/findAllSymbols.lib" )

# Import target "find-all-symbols" for configuration "Release"
set_property(TARGET find-all-symbols APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(find-all-symbols PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/find-all-symbols.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS find-all-symbols )
list(APPEND _IMPORT_CHECK_FILES_FOR_find-all-symbols "${_IMPORT_PREFIX}/bin/find-all-symbols.exe" )

# Import target "clangMove" for configuration "Release"
set_property(TARGET clangMove APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangMove PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangMove.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangMove )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangMove "${_IMPORT_PREFIX}/lib/clangMove.lib" )

# Import target "clang-move" for configuration "Release"
set_property(TARGET clang-move APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-move PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-move.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-move )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-move "${_IMPORT_PREFIX}/bin/clang-move.exe" )

# Import target "clangQuery" for configuration "Release"
set_property(TARGET clangQuery APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangQuery PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangQuery.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangQuery )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangQuery "${_IMPORT_PREFIX}/lib/clangQuery.lib" )

# Import target "clang-query" for configuration "Release"
set_property(TARGET clang-query APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-query PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-query.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-query )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-query "${_IMPORT_PREFIX}/bin/clang-query.exe" )

# Import target "clangIncludeCleaner" for configuration "Release"
set_property(TARGET clangIncludeCleaner APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangIncludeCleaner PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangIncludeCleaner.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangIncludeCleaner )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangIncludeCleaner "${_IMPORT_PREFIX}/lib/clangIncludeCleaner.lib" )

# Import target "clang-include-cleaner" for configuration "Release"
set_property(TARGET clang-include-cleaner APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-include-cleaner PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-include-cleaner.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-include-cleaner )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-include-cleaner "${_IMPORT_PREFIX}/bin/clang-include-cleaner.exe" )

# Import target "pp-trace" for configuration "Release"
set_property(TARGET pp-trace APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(pp-trace PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/pp-trace.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS pp-trace )
list(APPEND _IMPORT_CHECK_FILES_FOR_pp-trace "${_IMPORT_PREFIX}/bin/pp-trace.exe" )

# Import target "clangPseudoCLI" for configuration "Release"
set_property(TARGET clangPseudoCLI APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangPseudoCLI PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangPseudoCLI.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangPseudoCLI )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangPseudoCLI "${_IMPORT_PREFIX}/lib/clangPseudoCLI.lib" )

# Import target "clangPseudoCXX" for configuration "Release"
set_property(TARGET clangPseudoCXX APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangPseudoCXX PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangPseudoCXX.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangPseudoCXX )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangPseudoCXX "${_IMPORT_PREFIX}/lib/clangPseudoCXX.lib" )

# Import target "clangPseudoGrammar" for configuration "Release"
set_property(TARGET clangPseudoGrammar APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangPseudoGrammar PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangPseudoGrammar.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangPseudoGrammar )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangPseudoGrammar "${_IMPORT_PREFIX}/lib/clangPseudoGrammar.lib" )

# Import target "clangPseudo" for configuration "Release"
set_property(TARGET clangPseudo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangPseudo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangPseudo.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangPseudo )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangPseudo "${_IMPORT_PREFIX}/lib/clangPseudo.lib" )

# Import target "clang-pseudo" for configuration "Release"
set_property(TARGET clang-pseudo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-pseudo PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-pseudo.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-pseudo )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-pseudo "${_IMPORT_PREFIX}/bin/clang-pseudo.exe" )

# Import target "clangdSupport" for configuration "Release"
set_property(TARGET clangdSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangdSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangdSupport.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangdSupport )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangdSupport "${_IMPORT_PREFIX}/lib/clangdSupport.lib" )

# Import target "clangDaemon" for configuration "Release"
set_property(TARGET clangDaemon APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDaemon PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangDaemon.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDaemon )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDaemon "${_IMPORT_PREFIX}/lib/clangDaemon.lib" )

# Import target "clangDaemonTweaks" for configuration "Release"
set_property(TARGET clangDaemonTweaks APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDaemonTweaks PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangDaemonTweaks.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDaemonTweaks )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDaemonTweaks "${_IMPORT_PREFIX}/lib/clangDaemonTweaks.lib" )

# Import target "clangdMain" for configuration "Release"
set_property(TARGET clangdMain APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangdMain PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangdMain.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangdMain )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangdMain "${_IMPORT_PREFIX}/lib/clangdMain.lib" )

# Import target "clangd" for configuration "Release"
set_property(TARGET clangd APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangd PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clangd.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangd )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangd "${_IMPORT_PREFIX}/bin/clangd.exe" )

# Import target "clangdRemoteIndex" for configuration "Release"
set_property(TARGET clangdRemoteIndex APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangdRemoteIndex PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/clangdRemoteIndex.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangdRemoteIndex )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangdRemoteIndex "${_IMPORT_PREFIX}/lib/clangdRemoteIndex.lib" )

# Import target "libclang" for configuration "Release"
set_property(TARGET libclang APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(libclang PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libclang.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libclang.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS libclang )
list(APPEND _IMPORT_CHECK_FILES_FOR_libclang "${_IMPORT_PREFIX}/lib/libclang.lib" "${_IMPORT_PREFIX}/bin/libclang.dll" )

# Import target "amdgpu-arch" for configuration "Release"
set_property(TARGET amdgpu-arch APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(amdgpu-arch PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/amdgpu-arch.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS amdgpu-arch )
list(APPEND _IMPORT_CHECK_FILES_FOR_amdgpu-arch "${_IMPORT_PREFIX}/bin/amdgpu-arch.exe" )

# Import target "nvptx-arch" for configuration "Release"
set_property(TARGET nvptx-arch APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nvptx-arch PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/nvptx-arch.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS nvptx-arch )
list(APPEND _IMPORT_CHECK_FILES_FOR_nvptx-arch "${_IMPORT_PREFIX}/bin/nvptx-arch.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
