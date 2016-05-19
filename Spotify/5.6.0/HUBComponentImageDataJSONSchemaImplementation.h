/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/HUBComponentImageDataJSONSchema.h>

@protocol HUBJSONStringPath, HUBJSONURLPath;
@class NSDictionary, NSString;

@interface HUBComponentImageDataJSONSchemaImplementation : NSObject <HUBComponentImageDataJSONSchema> {

	id<HUBJSONStringPath> _styleStringPath;
	NSDictionary* _styleStringMap;
	id<HUBJSONURLPath> _URLPath;
	id<HUBJSONStringPath> _placeholderIconIdentifierPath;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<HUBJSONStringPath> styleStringPath;                            //@synthesize styleStringPath=_styleStringPath - In the implementation block
@property (nonatomic,retain) NSDictionary * styleStringMap;                                    //@synthesize styleStringMap=_styleStringMap - In the implementation block
@property (nonatomic,retain) id<HUBJSONURLPath> URLPath;                                       //@synthesize URLPath=_URLPath - In the implementation block
@property (nonatomic,retain) id<HUBJSONStringPath> placeholderIconIdentifierPath;              //@synthesize placeholderIconIdentifierPath=_placeholderIconIdentifierPath - In the implementation block
-(id<HUBJSONURLPath>)URLPath;
-(id<HUBJSONStringPath>)placeholderIconIdentifierPath;
-(id<HUBJSONStringPath>)styleStringPath;
-(NSDictionary *)styleStringMap;
-(id)initWithStyleStringPath:(id)arg1 styleStringMap:(id)arg2 URLPath:(id)arg3 placeholderIconIdentifierPath:(id)arg4 ;
-(void)setStyleStringPath:(id<HUBJSONStringPath>)arg1 ;
-(void)setStyleStringMap:(NSDictionary *)arg1 ;
-(void)setURLPath:(id<HUBJSONURLPath>)arg1 ;
-(void)setPlaceholderIconIdentifierPath:(id<HUBJSONStringPath>)arg1 ;
-(id)init;
-(id)copy;
@end

