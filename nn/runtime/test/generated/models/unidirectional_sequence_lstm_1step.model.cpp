// Generated from unidirectional_sequence_lstm_1step.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::unidirectional_sequence_lstm_1step {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type8(Type::INT32, {});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type1);
  auto input_to_cell_weights = model->addOperand(&type1);
  auto input_to_output_weights = model->addOperand(&type1);
  auto recurrent_to_intput_weights = model->addOperand(&type2);
  auto recurrent_to_forget_weights = model->addOperand(&type2);
  auto recurrent_to_cell_weights = model->addOperand(&type2);
  auto recurrent_to_output_weights = model->addOperand(&type2);
  auto cell_to_input_weights = model->addOperand(&type3);
  auto cell_to_forget_weights = model->addOperand(&type3);
  auto cell_to_output_weights = model->addOperand(&type3);
  auto input_gate_bias = model->addOperand(&type3);
  auto forget_gate_bias = model->addOperand(&type3);
  auto cell_gate_bias = model->addOperand(&type3);
  auto output_gate_bias = model->addOperand(&type3);
  auto projection_weights = model->addOperand(&type4);
  auto projection_bias = model->addOperand(&type5);
  auto output_state_in = model->addOperand(&type6);
  auto cell_state_in = model->addOperand(&type7);
  auto activation_param = model->addOperand(&type8);
  auto cell_clip_param = model->addOperand(&type9);
  auto proj_clip_param = model->addOperand(&type9);
  auto time_major_param = model->addOperand(&type10);
  auto input_layer_norm_weights = model->addOperand(&type3);
  auto forget_layer_norm_weights = model->addOperand(&type3);
  auto cell_layer_norm_weights = model->addOperand(&type3);
  auto output_layer_norm_weights = model->addOperand(&type3);
  auto output = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_1step
namespace generated_tests::unidirectional_sequence_lstm_1step {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type10(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type8(Type::INT32, {});
  OperandType type9(Type::FLOAT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type1);
  auto input_to_cell_weights = model->addOperand(&type1);
  auto input_to_output_weights = model->addOperand(&type1);
  auto recurrent_to_intput_weights = model->addOperand(&type2);
  auto recurrent_to_forget_weights = model->addOperand(&type2);
  auto recurrent_to_cell_weights = model->addOperand(&type2);
  auto recurrent_to_output_weights = model->addOperand(&type2);
  auto cell_to_input_weights = model->addOperand(&type3);
  auto cell_to_forget_weights = model->addOperand(&type3);
  auto cell_to_output_weights = model->addOperand(&type3);
  auto input_gate_bias = model->addOperand(&type3);
  auto forget_gate_bias = model->addOperand(&type3);
  auto cell_gate_bias = model->addOperand(&type3);
  auto output_gate_bias = model->addOperand(&type3);
  auto projection_weights = model->addOperand(&type4);
  auto projection_bias = model->addOperand(&type5);
  auto output_state_in = model->addOperand(&type6);
  auto cell_state_in = model->addOperand(&type7);
  auto activation_param = model->addOperand(&type8);
  auto cell_clip_param = model->addOperand(&type9);
  auto proj_clip_param = model->addOperand(&type9);
  auto time_major_param = model->addOperand(&type10);
  auto input_layer_norm_weights = model->addOperand(&type3);
  auto forget_layer_norm_weights = model->addOperand(&type3);
  auto cell_layer_norm_weights = model->addOperand(&type3);
  auto output_layer_norm_weights = model->addOperand(&type3);
  auto output = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_1step
