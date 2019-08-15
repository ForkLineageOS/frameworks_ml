// Generated from squeeze.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::squeeze {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, squeeze) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::squeeze
TEST_AVAILABLE_SINCE(V1_1, squeeze, generated_tests::squeeze::CreateModel)

namespace generated_tests::squeeze {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, squeeze_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::squeeze

