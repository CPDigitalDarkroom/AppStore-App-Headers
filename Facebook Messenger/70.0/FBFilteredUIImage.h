/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@interface FBFilteredUIImage : NSObject {

	Image<facebook::image_processing::RGBA8Pixel>* _rgb8image;
	FilterConfig _filterConfig;
	unique_ptr<facebook::image_processing::FilteredImage, std::__1::default_delete<facebook::image_processing::FilteredImage> >* _filteredImage;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _filterParams;

}
-(id)initWithUIImage:(id)arg1 withFilterConfig:(FilterConfig)arg2 withImageMetadata:(id)arg3 ;
-(void)clearFilter:(id)arg1 ;
-(id)applyFilter:(id)arg1 withParameters:(id)arg2 ;
@end

