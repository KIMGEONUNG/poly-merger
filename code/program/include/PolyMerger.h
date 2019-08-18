namespace PolyMerger
{

	/** class that merge or union the polygons that is separated slightly */
	class PolyMerger
	{
	private:
	    /**
	     * This is merge threshold.
	     * The higher the value, the farther away polygons can be combined.
	     */
	    int threshold;
	public:
	    PolyMerger(int threshold);
	
	};

}
