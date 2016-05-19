/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/HUBJSONSchemaRegistry.h>

@protocol HUBJSONSchema;
@class NSMutableDictionary, NSString;

@interface HUBJSONSchemaRegistryImplementation : NSObject <HUBJSONSchemaRegistry> {

	id<HUBJSONSchema> _defaultSchema;
	NSMutableDictionary* _customSchemasByIdentifier;

}

@property (nonatomic,readonly) id<HUBJSONSchema> defaultSchema;                              //@synthesize defaultSchema=_defaultSchema - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * customSchemasByIdentifier;              //@synthesize customSchemasByIdentifier=_customSchemasByIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)customSchemaForIdentifier:(id)arg1 ;
-(id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2 ;
-(NSMutableDictionary *)customSchemasByIdentifier;
-(id)createNewSchema;
-(void)registerCustomSchema:(id)arg1 forIdentifier:(id)arg2 ;
-(id<HUBJSONSchema>)defaultSchema;
@end

