/*
 * * Computes the weight of a batch of flat washers.
 * */
# include <stdio.h>
# define pi 3.14159

int
main(void)

{
	double hole_diameter,  /* input hole diameter */
		   edge_diameter,  /* input - diameter of outer edge */
		   thickness,      /*input - thickness of washer  */
		   density,        /*input - density of material used*/
		   quantity,    /*input - number of washers made*/
		   weight,    /*output - weight of washer batch*/
		   hole_radius,  /*radius of hole*/
		   edge_radius, /*radius of outer edge*/
		   rim_area,   /*area of rim*/
		   unit_weight;  /*weight of 1 washer */
	/* Get the inner diameter, outer diameter, and thickness.*/

	printf("Inner diameter in centimeters> ");
	scanf("%lf", &hole_diameter);
	      printf("Outer diameter in centimeters> ");
		  scanf("%lf",&edge_diameter);
			  printf("thickness in centimeters> ");
			  scanf("%lf",&thickness);
				  /* Get the material density and quantity manufactured. */
				   printf("material density in grams per cubic centimeters> ");
				   scanf("%lf",&density);
					  printf("quantity in batch> ");
					  scanf("%lf",&quantity);
						  /* compute the rim area.  */
						  hole_radius = hole_diameter / 2.0;
						  edge_radius = edge_diameter / 2.0;
                          rim_area = pi * edge_radius * edge_radius -pi * hole_radius * hole_radius;
						  /* Compute the weight of a flat washer. */
						  unit_weight = rim_area * thickness * density;
						  /* Compute the weight of the batch of washers. */
						  weight = unit_weight * quantity ;    
                          
						  /* Display the weight of the batch of washers. */
						  printf("\nThe expected weight of the batch is %.2f", weight);
						  printf(" grams.\n");
		return (0);

}



