/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Spotify/Spotify-Structs.h>
@class NSString;

@interface HUBComponentDefaults : NSObject {

	NSString* _componentNamespace;
	NSString* _componentName;
	NSObject* _componentCategory;

}

@property (nonatomic,copy,readonly) NSString * componentNamespace;                                  //@synthesize componentNamespace=_componentNamespace - In the implementation block
@property (nonatomic,copy,readonly) NSString * componentName;                                       //@synthesize componentName=_componentName - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying>*<NSCoding> componentCategory;              //@synthesize componentCategory=_componentCategory - In the implementation block
-(NSString *)componentNamespace;
-(NSObject*<NSCopying>*<NSCoding>)componentCategory;
-(id)initWithComponentNamespace:(id)arg1 componentName:(id)arg2 componentCategory:(NSObject*)arg3 ;
-(NSString *)componentName;
@end

