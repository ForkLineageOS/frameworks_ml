// Generated from logical_and.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::logical_and {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_simple();

TEST_F(GeneratedTests, logical_and_simple) {
    execute(CreateModel,
            is_ignored,
            get_examples_simple());
}

} // namespace generated_tests::logical_and
TEST_AVAILABLE_SINCE(V1_2, logical_and_simple, generated_tests::logical_and::CreateModel)

namespace generated_tests::logical_and {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, logical_and_simple_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_simple_dynamic_output_shape());
}

} // namespace generated_tests::logical_and

namespace generated_tests::logical_and {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast();

TEST_F(GeneratedTests, logical_and_broadcast) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_broadcast());
}

} // namespace generated_tests::logical_and
TEST_AVAILABLE_SINCE(V1_2, logical_and_broadcast, generated_tests::logical_and::CreateModel_2)

namespace generated_tests::logical_and {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, logical_and_broadcast_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_broadcast_dynamic_output_shape());
}

} // namespace generated_tests::logical_and

