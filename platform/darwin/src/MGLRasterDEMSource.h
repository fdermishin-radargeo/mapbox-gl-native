#import "MGLFoundation.h"

#import "MGLRasterSource.h"

/**
 `MGLRasterDEMSource` is a map content source that supplies rasterized
 <a href="https://en.wikipedia.org/wiki/Digital_elevation_model">digital elevation model</a>
 (DEM) tiles to be shown on the map. The location of and metadata about the
 tiles are defined either by an option dictionary or by an external file that
 conforms to the
 <a href="https://github.com/mapbox/tilejson-spec/">TileJSON specification</a>.
 A raster DEM source is added to an `MGLStyle` object along with one or more
 `MGLHillshadeStyleLayer` objects. Use a hillshade style layer to control the
 appearance of content supplied by the raster DEM source.

 Each
 <a href="https://www.mapbox.com/mapbox-gl-style-spec/#sources-raster-dem"><code>raster-dem</code></a>
 source defined by the style JSON file is represented at runtime by an
 `MGLRasterDEMSource` object that you can use to initialize new style layers.
 You can also add and remove sources dynamically using methods such as
 `-[MGLStyle addSource:]` and `-[MGLStyle sourceWithIdentifier:]`.
 
 Currently, raster DEM sources only support the format used by
 <a href="https://www.mapbox.com/help/access-elevation-data/#mapbox-terrain-rgb">Mapbox Terrain-RGB</a>.

 ### Example

 ```swift
 let terrainRGBURL = URL(string: "mapbox://mapbox.terrain-rgb")!
 let source = MGLRasterDEMSource(identifier: "hills", configurationURL: terrainRGBURL)
 mapView.style?.addSource(source)
 ```
 */
MGL_EXPORT
@interface MGLRasterDEMSource : MGLRasterSource

@end
