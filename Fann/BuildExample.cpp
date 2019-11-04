#include "fann.h"
/*
int main()
{
	const unsigned int num_input = 26;
	const unsigned int num_output = 7;
	const unsigned int num_layers = 3;

	const unsigned int num_neurons_hidden = 3;
	const float desired_error = (const float) 0.001;

	const unsigned int connection_rate = 1;
	const float learning_rate = 0.5;

	const unsigned int max_epochs = 1000000;
	const unsigned int epochs_between_reports = 10;

	const unsigned int layers[3] = { num_input, num_neurons_hidden, num_output };

	struct fann* ann = fann_create_sparse_array(connection_rate, num_layers, layers);

	fann_set_learning_rate(ann, learning_rate);

	fann_train_on_file(ann, "D:\\M2\\SystemComplex\\Ressource\\langage.txt", max_epochs, epochs_between_reports, desired_error);

	fann_save(ann, "D:\\M2\\SystemComplex\\Ressource\\langage.net");

	fann_destroy(ann);

	return 0;

}
//*/