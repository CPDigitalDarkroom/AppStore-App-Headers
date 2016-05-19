/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/HUBJSONBoolPath.h>
#import <Spotify/HUBJSONIntegerPath.h>
#import <Spotify/HUBJSONStringPath.h>
#import <Spotify/HUBJSONURLPath.h>
#import <Spotify/HUBJSONDatePath.h>
#import <Spotify/HUBJSONDictionaryPath.h>

@class NSArray, NSString;

@interface HUBJSONPathImplementation : NSObject <HUBJSONBoolPath, HUBJSONIntegerPath, HUBJSONStringPath, HUBJSONURLPath, HUBJSONDatePath, HUBJSONDictionaryPath> {

	NSArray* _parsingOperations;

}

@property (nonatomic,readonly) NSArray * parsingOperations;              //@synthesize parsingOperations=_parsingOperations - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)parsingOperations;
-(id)valuesByPerformingParsingOperation:(id)arg1 withInputValues:(id)arg2 ;
-(id)initWithParsingOperations:(id)arg1 ;
-(id)valuesFromJSONDictionary:(id)arg1 ;
-(char)boolFromJSONDictionary:(id)arg1 ;
-(int)integerFromJSONDictionary:(id)arg1 ;
-(id)stringFromJSONDictionary:(id)arg1 ;
-(id)URLFromJSONDictionary:(id)arg1 ;
-(id)dateFromJSONDictionary:(id)arg1 ;
-(id)dictionaryFromJSONDictionary:(id)arg1 ;
-(id)mutableCopy;
@end

