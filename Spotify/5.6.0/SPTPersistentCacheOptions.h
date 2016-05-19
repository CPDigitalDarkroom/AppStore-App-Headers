/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPTPersistentCacheOptions : NSObject <NSCopying> {

	char _useDirectorySeparation;
	NSString* _cacheIdentifier;
	NSString* _cachePath;
	unsigned _garbageCollectionInterval;
	unsigned _defaultExpirationPeriod;
	unsigned _sizeConstraintBytes;
	/*^block*/id _debugOutput;

}

@property (assign,nonatomic) char folderSeparationEnabled; 
@property (nonatomic,readonly) unsigned gcIntervalSec; 
@property (nonatomic,readonly) unsigned defaultExpirationPeriodSec; 
@property (nonatomic,copy,readonly) NSString * identifierForQueue; 
@property (nonatomic,copy) NSString * cacheIdentifier;                           //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cachePath;                                 //@synthesize cachePath=_cachePath - In the implementation block
@property (assign,nonatomic) char useDirectorySeparation;                        //@synthesize useDirectorySeparation=_useDirectorySeparation - In the implementation block
@property (assign,nonatomic) unsigned garbageCollectionInterval;                 //@synthesize garbageCollectionInterval=_garbageCollectionInterval - In the implementation block
@property (assign,nonatomic) unsigned defaultExpirationPeriod;                   //@synthesize defaultExpirationPeriod=_defaultExpirationPeriod - In the implementation block
@property (assign,nonatomic) unsigned sizeConstraintBytes;                       //@synthesize sizeConstraintBytes=_sizeConstraintBytes - In the implementation block
@property (nonatomic,copy) id debugOutput;                                       //@synthesize debugOutput=_debugOutput - In the implementation block
-(void)setCachePath:(NSString *)arg1 ;
-(void)setDefaultExpirationPeriod:(unsigned)arg1 ;
-(void)setSizeConstraintBytes:(unsigned)arg1 ;
-(void)setDebugOutput:(id)arg1 ;
-(void)setUseDirectorySeparation:(char)arg1 ;
-(id)initWithCachePath:(id)arg1 identifier:(id)arg2 defaultExpirationInterval:(unsigned)arg3 garbageCollectorInterval:(unsigned)arg4 debug:(/*^block*/id)arg5 ;
-(id)debugOutput;
-(NSString *)identifierForQueue;
-(unsigned)defaultExpirationPeriod;
-(unsigned)sizeConstraintBytes;
-(char)useDirectorySeparation;
-(char)folderSeparationEnabled;
-(void)setFolderSeparationEnabled:(char)arg1 ;
-(unsigned)gcIntervalSec;
-(unsigned)defaultExpirationPeriodSec;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(NSString *)cacheIdentifier;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)garbageCollectionInterval;
-(void)setGarbageCollectionInterval:(unsigned)arg1 ;
-(NSString *)cachePath;
@end

