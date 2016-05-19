/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/HUBComponentFallbackHandler.h>

@protocol HUBComponentFactory;
@class NSString, NSDictionary;

@interface SPTGLUEHubComponentFallbackHandler : NSObject <HUBComponentFallbackHandler> {

	NSDictionary* _fallbackComponentNames;
	id<HUBComponentFactory> _componentFactory;

}

@property (nonatomic,readonly) id<HUBComponentFactory> componentFactory;                                   //@synthesize componentFactory=_componentFactory - In the implementation block
@property (nonatomic,readonly) NSDictionary * fallbackComponentNames;                                      //@synthesize fallbackComponentNames=_fallbackComponentNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * defaultComponentNamespace; 
@property (nonatomic,copy,readonly) NSString * defaultComponentName; 
@property (nonatomic,copy,readonly) NSObject*<NSCopying>*<NSCoding> defaultComponentCategory; 
-(id)initWithComponentFactory:(id)arg1 ;
-(NSDictionary *)fallbackComponentNames;
-(NSString *)defaultComponentName;
-(id<HUBComponentFactory>)componentFactory;
-(id)createFallbackComponentForCategory:(NSObject*)arg1 ;
-(NSString *)defaultComponentNamespace;
-(NSObject*<NSCopying>*<NSCoding>)defaultComponentCategory;
@end

