// Generated from transpose_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::transpose_v1_2 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, transpose_v1_2) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::transpose_v1_2
TEST_AVAILABLE_SINCE(V1_1, transpose_v1_2, generated_tests::transpose_v1_2::CreateModel)

namespace generated_tests::transpose_v1_2 {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, transpose_v1_2_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_quant8(Model *model);
bool is_ignored_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

TEST_F(GeneratedTests, transpose_v1_2_quant8) {
    execute(CreateModel_quant8,
            is_ignored_quant8,
            get_examples_quant8());
}

} // namespace generated_tests::transpose_v1_2
TEST_AVAILABLE_SINCE(V1_1, transpose_v1_2_quant8, generated_tests::transpose_v1_2::CreateModel_quant8)

namespace generated_tests::transpose_v1_2 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_v1_2_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, transpose_v1_2_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_dynamic_output_shape_quant8(Model *model);
bool is_ignored_dynamic_output_shape_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

TEST_F(DynamicOutputShapeTest, transpose_v1_2_dynamic_output_shape_quant8) {
    execute(CreateModel_dynamic_output_shape_quant8,
            is_ignored_dynamic_output_shape_quant8,
            get_examples_dynamic_output_shape_quant8());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized(Model *model);
bool is_ignored_zero_sized(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized();

TEST_F(GeneratedTests, transpose_v1_2_zero_sized) {
    execute(CreateModel_zero_sized,
            is_ignored_zero_sized,
            get_examples_zero_sized());
}

} // namespace generated_tests::transpose_v1_2
TEST_AVAILABLE_SINCE(V1_2, transpose_v1_2_zero_sized, generated_tests::transpose_v1_2::CreateModel_zero_sized)

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized_relaxed(Model *model);
bool is_ignored_zero_sized_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed();

TEST_F(GeneratedTests, transpose_v1_2_zero_sized_relaxed) {
    execute(CreateModel_zero_sized_relaxed,
            is_ignored_zero_sized_relaxed,
            get_examples_zero_sized_relaxed());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized_quant8(Model *model);
bool is_ignored_zero_sized_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8();

TEST_F(GeneratedTests, transpose_v1_2_zero_sized_quant8) {
    execute(CreateModel_zero_sized_quant8,
            is_ignored_zero_sized_quant8,
            get_examples_zero_sized_quant8());
}

} // namespace generated_tests::transpose_v1_2
TEST_AVAILABLE_SINCE(V1_2, transpose_v1_2_zero_sized_quant8, generated_tests::transpose_v1_2::CreateModel_zero_sized_quant8)

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized_float16(Model *model);
bool is_ignored_zero_sized_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16();

TEST_F(GeneratedTests, transpose_v1_2_zero_sized_float16) {
    execute(CreateModel_zero_sized_float16,
            is_ignored_zero_sized_float16,
            get_examples_zero_sized_float16());
}

} // namespace generated_tests::transpose_v1_2
TEST_AVAILABLE_SINCE(V1_2, transpose_v1_2_zero_sized_float16, generated_tests::transpose_v1_2::CreateModel_zero_sized_float16)

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized_dynamic_output_shape) {
    execute(CreateModel_zero_sized_dynamic_output_shape,
            is_ignored_zero_sized_dynamic_output_shape,
            get_examples_zero_sized_dynamic_output_shape());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized_dynamic_output_shape_relaxed) {
    execute(CreateModel_zero_sized_dynamic_output_shape_relaxed,
            is_ignored_zero_sized_dynamic_output_shape_relaxed,
            get_examples_zero_sized_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_quant8(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_quant8();

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized_dynamic_output_shape_quant8) {
    execute(CreateModel_zero_sized_dynamic_output_shape_quant8,
            is_ignored_zero_sized_dynamic_output_shape_quant8,
            get_examples_zero_sized_dynamic_output_shape_quant8());
}

} // namespace generated_tests::transpose_v1_2

namespace generated_tests::transpose_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_float16(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized_dynamic_output_shape_float16) {
    execute(CreateModel_zero_sized_dynamic_output_shape_float16,
            is_ignored_zero_sized_dynamic_output_shape_float16,
            get_examples_zero_sized_dynamic_output_shape_float16());
}

} // namespace generated_tests::transpose_v1_2

